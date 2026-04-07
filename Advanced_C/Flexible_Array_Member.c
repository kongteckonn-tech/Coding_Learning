#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>

typedef struct s
{
	int i;
	int arr[];// 柔性数组成员
}s;

// 柔性数组成员 前 必须要有其他成员

// sizeof 不计算柔性数组

	//int main()
	//{
	//	printf("%zd\n", sizeof(s));
	//	return 0;
	//}

// 柔性数组的使用

	//int main() // malloc one time only
	//{
	//	s* ps = (s*)malloc(sizeof(s) + 40);
	//	if (ps == NULL)
	//	{
	//		return 1;
	//	}
	//	ps->i = 10;
	//	int i = 0;
	//	for (i = 0; i < ps->i; i++)
	//	{
	//		ps->arr[i] = i;
	//		printf("%d\n", ps->arr[i]);
	//	}
	//	free(ps);
	//	ps = NULL;
	//	return 0;
	//}

	//typedef struct S1
	//{
	//	int n;
	//	int* arr;
	//}s1;
	//int main()// malloc 2 times
	//{
	//	// 创建
	//	s1* ps = (s1*)malloc(sizeof(s1));
	//	if (ps == NULL)
	//		return 1;
	//	ps->n = 10;
	//	ps->arr = (int*)malloc(40);
	//	if (ps->arr == NULL)
	//		return 1;
	//	int i = 0;
	//	for (i = 0; i < ps->n; i++)
	//	{
	//		ps->arr[i] = i;
	//		printf("%d\n", ps->arr[i]);
	//	}
	//	// 释放
	//	free(ps->arr);
	//	ps->arr = NULL;
	//	free(ps);
	//	ps = NULL;
	//	return 0;
	//}

