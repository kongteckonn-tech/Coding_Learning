#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// 预定义符号

	//int main()
	//{
	//	int i = 0;
	//	for (i = 0; i < 10; i++)
	//	{
	//		printf("file:%s line:%d date:%s time:%s i=%d\n", 
	//			__FILE__, 
	//			__LINE__, 
	//			__DATE__, 
	//			__TIME__, 
	//			i);
	//	}
	//	return 0;
	//}

// #define

	//#define MAX 100
	//#define STR "Hello Bit"
	//int main()
	//{
	//	printf("%d\n", MAX);
	//	printf(STR);
	//	return 0;
	//}

// #define 定义宏 (define macro)

	//#define SQUARE(X) X*X // 宏 是进行替换，而不是先算再替换
	//int main()
	//{
	//	int r = SQUARE(5+1);// 5+1*5+1 = 11
	//	printf("%d\n", r);
	//	return 0;
	//}

// #define #...(可把参数转换成字符串)

	//#define PRINT(N) printf("The value of "#N" is %d\n", N)
	//int main()
	//{
	//	int a = 10;
	//	int b = 20;
	//	//printf("The value of a is %d\n", a);
	//	//printf("The value of b is %d\n", b);
	//	PRINT(a);
	//	PRINT(b);
	//	return 0;
	//}

	//#define PRINT(N, FORMAT) printf("The value of "#N" is "FORMAT"\n", N)
	//int main()
	//{
	//	int a = 40;
	//	double b = 3.1415926;
	//	PRINT(a, "%d");
	//	PRINT(b, "%lf");
	//	return 0;
	//}

// ## 可以把两个符号变成一个符号

	//#define CAT(Class, Num) Class##Num
	//int main()
	//{
	//	int Class106 = 100;
	//	int Class107 = 120;
	//	printf("%d\n", CAT(Class, 106));
	//	printf("%d\n", CAT(Class, 107));
	//	return 0;
	//}

// undef

	//#define M 10
	//int main()
	//{
	//	printf("%d\n", M);
	//#undef M
	//	printf("%d\n", M);
	//	return 0;
	//}

// 条件编译

// #if ... #endif

	//int main()
	//{
	//#if 1 // *常量* 表达式
	//	printf("Kong\n");
	//#endif
	//	return 0;
	//}

// #if ... #elif ... #elif ... #else ... #endif

	//#define M 3
	//int main()
	//{
	//#if M > 5
	//	printf("Kong\n");
	//#elif M > 4
	//	printf("Teck\n");
	//#else
	//	printf("Onn\n");
	//#endif
	//	return 0;
	//}

// #ifdef / #ifndef ... ... #endif

	//#define DEBUG 
	//int main()
	//{
	//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	//	int i = 0;
	//#ifdef DEBUG// 有 DEBUG 就继续
	//	for (i = 0; i < 10; i++)
	//	{
	//		printf("%d ", arr[i]);
	//	}
	//#endif
	//#ifndef DEBUG
	//	printf("Teck\n");
	//#endif
	//	return 0;
	//}

// 判断是否定义过 #if defined(...) ... #endif

	//#define MAX 100
	//int main()
	//{
	//#if defined(MAX)
	//	printf("Kong\n");
	//#elif !defined(MAX)
	//	printf("Teck\n");
	//#endif
	//	return 0;
	//}

// offsetof 宏的实现

	//#include<stddef.h>
	//#define OFFSETOF(type, m_name) ((size_t)&(((type*)0)->m_name))
	//struct S
	//{
	//	char ch;
	//	int num;
	//	char ch2;
	//};
	//int main()
	//{
	//	struct S s = { 0 };
	//	printf("%d\n", (int)offsetof(struct S, ch));
	//	printf("%d\n", (int)offsetof(struct S, num));
	//	printf("%d\n", (int)offsetof(struct S, ch2));
	//	printf("%d\n", (int)OFFSETOF(struct S, ch));
	//	printf("%d\n", (int)OFFSETOF(struct S, num));
	//	printf("%d\n", (int)OFFSETOF(struct S, ch2));
	//	return 0;
	//}
