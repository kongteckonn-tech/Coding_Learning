#define _CRT_SECURE_NO_WARNINGS
#include "Tic_Tac_Toe.h"

int main()
{
	srand((unsigned)time(NULL));
	int input = 0;
	do
	{
		//打印菜单
		menu();
		printf("Please Select:");
		scanf("%d", &input);
		//determine
		switch (input)
		{
		case 1:
			system("cls");
			game_3T();
			break;
		case 0:
			system("cls");
			printf("Exit Game\n");
			break;
		default :
			system("cls");
			printf("Please Try Again\n");
			break;
		}
	} while (input);
	return 0;
}
