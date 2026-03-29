#include"Mine_Sweeper.h"
// Basic Function 
// 1. Mark mine
// 2. When there are no mines arround the selected coordinate, 
//	  automatically detect the coordinates next
//  a. That coordinate not a mine
//	b. There are no mines arround that coordinate
//	c. That coordinate haven't been detected
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do {
		menu();
		printf("Please Select:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			system("cls");
			game();
			break;
		case 0:
			system("cls");
			printf("\nSee You Again\n");
			break;
		default:
			system("cls");
			printf("ERROR\nPlease Try Again\n");
			break;
		}
	} while (input);
	return 0;
}
