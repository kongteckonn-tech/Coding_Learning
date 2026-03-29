#define _CRT_SECURE_NO_WARNINGS
#include"Tic_Tac_Toe.h"

void menu()
{
	printf("~Tic Tac Toe Game~\n");
	printf("******************\n");
	printf("******1.Play******\n");
	printf("******0.Exit******\n");
	printf("******************\n");
}

void Create_Board(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

//烂版本
//void Display_Board(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		//output data
//		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
//		//Split data
//		if(i< row -1)
//		printf("---|---|---\n");
//	}
//}

//好版本
void Display_Board(char board[ROW][COL], int row, int col)
{
	printf("Tic Tac Toe Board:\n");
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		//output data
		printf("   ");
		for (j = 0; j < col; j++)
		{
			printf(" %c ",board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		//Split data
		if (i < row - 1)
		{
			printf("   ");
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}

void Player(char board[ROW][COL], int row, int col)
{
	//coordinate
	int x = 0;
	int y = 0;
	printf("Your Turn.\nCoordinate:");
	while(1)
	{
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= row)
		{
			//determine whether this coordinate occupy
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '0';
				break;
			}
			else printf("\nThis coordinate has been occipied, Try Again:");
		}
		else printf("\nUnable to detect your coordinate !!!\nPlease try again:");
	}
}

//fool computer:
void Computer(char board[ROW][COL], int row, int col)
//computer moves randomly and determine that coordinate occupied or not 
{
	//coordinate
	int x = 0;
	int y = 0;
	while(1)
	{
		//random coordinate
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

int Is_Full(char board[ROW][COL], int row, int col)
{
	//if the board is full, return 1
	//if there is space on the board, return 0
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}

char Is_Vic(char board[ROW][COL], int row, int col)
{
	//determint row
	int i = 0;
	for (i = 0; i < row; i++)
	{
		// each element on row is the same, but not ' '
		if (board[i][0] == board[i][1] && board[i][1]==board[i][2] && board[i][1] != ' ')
		{
			return board[i][0];
		}
	}
	//determint column
	int j = 0;
	for (j = 0; j < row; j++)
	{
		// each element on row is the same, but not ' '
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[1][j] != ' ')
		{
			return board[0][j];
		}
	}
	//determint 斜线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	// no one victory so it is a draw (full board)
	if (Is_Full(board, row, col))
	{
		return 'D';
	}
	//game continues
	return 'C';
}

//Tic Tac Toe Function
void game_3T()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	Create_Board(board, ROW /*row*/, COL /*column*/);//棋盘初始化
	Display_Board(board, ROW, COL);//display board
	while (1)//player move ---> display ---> computer move ---> display
	{
		Player(board, ROW, COL);//player move
		system("cls");//clear previous board
		Display_Board(board, ROW, COL);
		//Determine victory or defeat
		//player victory return '0' 
		//computer victory return '#' 
		//draw(平局) return 'D' 
		//continue return 'C'
		//Return type : char
		ret = Is_Vic(board, ROW, COL);
		if (ret != 'C')
			break;
		Computer(board, ROW, COL);//computer move
		system("cls");
		Display_Board(board, ROW, COL);
		ret = Is_Vic(board, ROW, COL);
		if (ret != 'C')
			break;
		//Determine victory or defeat
	}
	if (ret == '0')
		printf("Congratulation!\nExcellent!\n");
	else if (ret == '#')
		printf("You Lose!\n");
	else if (ret == 'D')
		printf("Draw\n");
	printf("\n");
}
