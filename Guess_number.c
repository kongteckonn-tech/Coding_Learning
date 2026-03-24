#include<stdio.h>
#include<time.h>

void menu()
{
	printf("*************************************\n");
	printf("*************************************\n");
	printf("*************  1. play  *************\n");
	printf("*************  0. exit  *************\n");
	printf("*************************************\n");
	printf("*************************************\n");
}
void game()
{
	//1. 叫电脑产生随机数字
	int ret = rand()%100 + 1;// 产生随机数字 从0 到 RAND_MAX(可调)
	RAND_MAX;//想调(右键-> 点 peek definition / alt + f12 / ctrl + f12)
	//rand 函数的头文件 ： #include<stdlib.h>
	int guess = 0;
	
	//2. 猜数
	while (1)
	{
		printf("Guess one number:");
		scanf("%d", &guess);
		// 猜小了
		if (guess < ret)
			printf("too small\n");
		// 猜大了
		else if (guess > ret)
			printf("too big\n");
		// 直到猜对
		else if (guess == ret)
		{
			printf("Congratulation \nYou are right\nThe number is %d\n", ret);
			break;
		}
	}
}
int main()
{
	//产生随机数字
	srand((unsigned int)time(NULL)/*这个里面要一直在变化*/);// srand 设置一个随机数的起点
	//时间戳一直在变化所以放进去
	//时间戳：某年某月某日某分某秒的一个整数, 时间在变化 = 时间戳在变化
	//时间戳函数 (unsigned int)time(NULL) : 头文件是 #include<time.h>
	//NULL (空指针) 指针变量在初始化使用 exp: int *p = NULL;
	int input = 0;
	do
	{
		menu();
		printf("Select one : ");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();// 猜数字函数
			break;
		case 0:
			printf("Exit game\n");
			break;
		default :
			printf("Error, Try again:\n");
			break;
		}
	} while (input);
	return 0;
}

void manu()
{
	printf("***************************\n");
	printf("********* 1. Play *********\n");
	printf("********* 0. Exit *********\n");
	printf("***************************\n");
	printf("Your decision is : ");
}
int random()
{
	int R = rand() % 100 + 1;
	return R;
}
int main()
{
	srand(time(NULL));
start:manu();
	int n = 0;
	scanf("%d", &n);
	if (n == 1)
	{
		int num = 0;
		int random_num = random();
		printf("\nGuess one number:");
		scanf("%d", &num);
		while (1)
		{
			if (num > random_num)
			{
				printf("Too Big\nTry Again:");
				scanf("%d", &num);
			}
			else if (num < random_num)
			{
				printf("Too Small\nTry Again:");
				scanf("%d", &num);
			}
			else
			{
				printf("!!!CONGRATULATION!!!\n\\(^v^)/\nRandom number is : %d\n", random_num);
				goto start;
			}
		}
	}
	else if (n == 0);
	else
	{
		printf("\nPlease try again\n\n");
		goto start;
	}
	return 0;
}
