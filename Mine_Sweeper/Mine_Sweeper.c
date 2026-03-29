#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#ifdef _WIN32
#include <windows.h>
#include <conio.h>
#define CLEAR "cls"
#else
#include <termios.h>
#include <unistd.h>
#define CLEAR "clear"
#endif

// Color Definitions
#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define WHITE "\033[37m"

#define MAX_BOARD_SIZE 30

typedef struct {
   int rows;
   int cols;
   int mines;
   char board[MAX_BOARD_SIZE][MAX_BOARD_SIZE];
   bool revealed[MAX_BOARD_SIZE][MAX_BOARD_SIZE];
   bool mines_location[MAX_BOARD_SIZE][MAX_BOARD_SIZE];
   bool flagged[MAX_BOARD_SIZE][MAX_BOARD_SIZE];
   int remaining_mines;
   bool game_over;
   bool game_won;
} Minesweeper;

// Function prototypes
void initialize_game(Minesweeper* game, int rows, int cols, int mines);
void place_mines(Minesweeper* game);
void calculate_numbers(Minesweeper* game);
void draw_board(Minesweeper* game, int cursor_x, int cursor_y);
void reveal_cell(Minesweeper* game, int x, int y);
void flood_fill(Minesweeper* game, int x, int y);
bool check_win(Minesweeper* game);
void toggle_flag(Minesweeper* game, int x, int y);

// Cross-platform getch implementation
int getch_cross_platform() {
#ifdef _WIN32
   return _getch();
#else
   struct termios oldt, newt;
   int ch;
   tcgetattr(STDIN_FILENO, &oldt);
   newt = oldt;
   newt.c_lflag &= ~(ICANON | ECHO);
   tcsetattr(STDIN_FILENO, TCSANOW, &newt);
   ch = getchar();
   tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
   return ch;
#endif
}

void clear_screen() {
   system(CLEAR);
}

void print_title() {
   printf(CYAN);
   printf("\n");
   printf("   __  __ _____  _____ _______ ______ _____  _    _ _____ _______ ______ _____  \n");
   printf("  |  \\/  |_   _|/ ____|__   __|  ____|  __ \\| |  | |_   _|__   __|  ____|  __ \\ \n");
   printf("  | \\  / | | | | (___    | |  | |__  | |__) | |  | | | |    | |  | |__  | |__) |\n");
   printf("  | |\\/| | | |  \\___ \\   | |  |  __| |  ___/| |  | | | |    | |  |  __| |  _  / \n");
   printf("  | |  | |_| |_ ____) |  | |  | |____| |    | |__| |_| |_   | |  | |____| | \\ \\ \n");
   printf("  |_|  |_|_____|_____/   |_|  |______|_|     \\____/|_____|  |_|  |______|_|  \\_\\\n");
   printf(RESET "\n");
}

void initialize_game(Minesweeper* game, int rows, int cols, int mines) {
   // Initialize game parameters
   game->rows = rows;
   game->cols = cols;
   game->mines = mines;
   game->remaining_mines = mines;
   game->game_over = false;
   game->game_won = false;

   // Reset all arrays
   for (int i = 0; i < rows; i++) {
       for (int j = 0; j < cols; j++) {
           game->board[i][j] = '0';
           game->revealed[i][j] = false;
           game->mines_location[i][j] = false;
           game->flagged[i][j] = false;
       }
   }

   // Place mines and calculate numbers
   place_mines(game);
   calculate_numbers(game);
}

void place_mines(Minesweeper* game) {
   srand(time(NULL));
   int mines_placed = 0;

   while (mines_placed < game->mines) {
       int x = rand() % game->rows;
       int y = rand() % game->cols;

       if (!game->mines_location[x][y]) {
           game->mines_location[x][y] = true;
           mines_placed++;
       }
   }
}

void calculate_numbers(Minesweeper* game) {
   int dx[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
   int dy[] = { -1, 0, 1, -1, 1, -1, 0, 1 };

   for (int i = 0; i < game->rows; i++) {
       for (int j = 0; j < game->cols; j++) {
           if (!game->mines_location[i][j]) {
               int mine_count = 0;

               for (int k = 0; k < 8; k++) {
                   int new_x = i + dx[k];
                   int new_y = j + dy[k];

                   if (new_x >= 0 && new_x < game->rows &&
                       new_y >= 0 && new_y < game->cols &&
                       game->mines_location[new_x][new_y]) {
                       mine_count++;
                   }
               }

               game->board[i][j] = mine_count + '0';
           }
       }
   }
}

void draw_board(Minesweeper* game, int cursor_x, int cursor_y) {
   clear_screen();
   print_title();

   // Print top border and column numbers
   printf("   ");
   for (int j = 0; j < game->cols; j++) {
       printf("%2d ", j);
   }
   printf("\n   ");
   for (int j = 0; j < game->cols; j++) {
       printf("---");
   }
   printf("\n");

   // Draw the board
   for (int i = 0; i < game->rows; i++) {
       // Row numbers
       printf("%2d ", i);

       for (int j = 0; j < game->cols; j++) {
           // Cursor highlight
           if (i == cursor_x && j == cursor_y) {
               printf(YELLOW "[" RESET);
           }
           else {
               printf(" ");
           }

           // Cell rendering
           if (game->game_over && game->mines_location[i][j]) {
               printf(RED "*" RESET);  // Reveal mines on game over
           }
           else if (game->flagged[i][j]) {
               printf(MAGENTA "F" RESET);
           }
           else if (!game->revealed[i][j]) {
               printf("." RESET);
           }
           else if (game->board[i][j] == '0') {
               printf(" " RESET);
           }
           else {
               // Colorize numbers
               switch (game->board[i][j]) {
               case '1': printf(BLUE "%c" RESET, game->board[i][j]); break;
               case '2': printf(GREEN "%c" RESET, game->board[i][j]); break;
               case '3': printf(RED "%c" RESET, game->board[i][j]); break;
               case '4': printf(MAGENTA "%c" RESET, game->board[i][j]); break;
               default: printf("%c", game->board[i][j]); break;
               }
           }

           // Cursor highlight end
           if (i == cursor_x && j == cursor_y) {
               printf(YELLOW "]" RESET);
           }
           else {
               printf(" ");
           }
       }
       printf("\n");
   }

   // Game status
   printf("\n  Mines Remaining: %d", game->remaining_mines);
   if (game->game_over) {
       if (game->game_won) {
           printf(GREEN "\n  Congratulations! You won!" RESET);
       }
       else {
           printf(RED "\n  Game Over! You hit a mine!" RESET);
       }
   }

   // Controls
   printf("\n\n  Controls:");
   printf("\n  WASD/Arrow Keys - Move");
   printf("\n  SPACE - Reveal");
   printf("\n  F - Flag/Unflag");
   printf("\n  Q - Quit");
}

void reveal_cell(Minesweeper* game, int x, int y) {
   if (x < 0 || x >= game->rows || y < 0 || y >= game->cols ||
       game->revealed[x][y] || game->flagged[x][y]) {
       return;
   }

   game->revealed[x][y] = true;

   if (game->mines_location[x][y]) {
       game->game_over = true;
       return;
   }

   if (game->board[x][y] == '0') {
       flood_fill(game, x, y);
   }
}

void flood_fill(Minesweeper* game, int x, int y) {
   int dx[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
   int dy[] = { -1, 0, 1, -1, 1, -1, 0, 1 };

   for (int k = 0; k < 8; k++) {
       int new_x = x + dx[k];
       int new_y = y + dy[k];

       if (new_x >= 0 && new_x < game->rows &&
           new_y >= 0 && new_y < game->cols &&
           !game->revealed[new_x][new_y] &&
           !game->flagged[new_x][new_y]) {
           reveal_cell(game, new_x, new_y);
       }
   }
}

bool check_win(Minesweeper* game) {
   for (int i = 0; i < game->rows; i++) {
       for (int j = 0; j < game->cols; j++) {
           if (!game->mines_location[i][j] && !game->revealed[i][j]) {
               return false;
           }
       }
   }
   return true;
}

void toggle_flag(Minesweeper* game, int x, int y) {
   if (!game->revealed[x][y]) {
       game->flagged[x][y] = !game->flagged[x][y];
       game->remaining_mines += game->flagged[x][y] ? -1 : 1;
   }
}

void play_game() {
   Minesweeper game;
   int difficulty;

   print_title();
   printf("\n  Select Difficulty:\n");
   printf("  1. Beginner (9x9, 10 mines)\n");
   printf("  2. Intermediate (16x16, 40 mines)\n");
   printf("  3. Expert (24x24, 99 mines)\n");
   printf("  Enter choice: ");
   scanf("%d", &difficulty);

   switch (difficulty) {
   case 1:
       initialize_game(&game, 9, 9, 10);
       break;
   case 2:
       initialize_game(&game, 16, 16, 40);
       break;
   case 3:
       initialize_game(&game, 24, 24, 99);
       break;
   default:
       initialize_game(&game, 9, 9, 10);
       break;
   }

   int cursor_x = 0, cursor_y = 0;
   char input;

   while (!game.game_over) {
       draw_board(&game, cursor_x, cursor_y);

       input = getch_cross_platform();

       switch (input) {
           // Movement
       case 'w': case 'W': case 72: // Up
           if (cursor_x > 0) cursor_x--;
           break;
       case 's': case 'S': case 80: // Down
           if (cursor_x < game.rows - 1) cursor_x++;
           break;
       case 'a': case 'A': case 75: // Left
           if (cursor_y > 0) cursor_y--;
           break;
       case 'd': case 'D': case 77: // Right
           if (cursor_y < game.cols - 1) cursor_y++;
           break;

           // Reveal or Flag
       case ' ': case '\r': // Reveal
           if (!game.flagged[cursor_x][cursor_y]) {
               reveal_cell(&game, cursor_x, cursor_y);
           }
           break;

       case 'f': case 'F': // Flag
           toggle_flag(&game, cursor_x, cursor_y);
           break;

       case 'q': case 'Q': // Quit
           return;
       }

       // Check win condition
       if (check_win(&game)) {
           game.game_over = true;
           game.game_won = true;
       }
   }

   // Final board display after game ends
   draw_board(&game, cursor_x, cursor_y);
   getch_cross_platform();  // Wait for keypress
}

int main() {
   play_game();
   return 0;
}
