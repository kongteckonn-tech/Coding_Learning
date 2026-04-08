#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// struct type

	//struct Stu
	//{
	//	char name[50];
	//	short age;
	//}s1/*全局变量*/;
	//int main()
	//{
	//	struct Stu s2;//局部变量
	//	return 0;
	//}

// 匿名 struct 一次性

	//struct
	//{
	//	char name[50];
	//	short age;
	//}s1;

// 结构体 自引用

	//struct node
	//{
	//	int data;
	//	struct node* next;// 一定是结构体指针，不可以是结构体本身
	//};

// struct initialization

	//struct Point
	//{
	//	int x;
	//	int y;
	//}p1 = { 2, 3 };
	//struct iniPoint
	//{
	//	int a;
	//	int b;
	//	struct Point c;
	//};
	//int main()
	//{
	//	struct Point p2 = { 3, 4 };
	//	struct iniPoint ip = { 4, 5, {1, 2} };
	//	printf("{%d, %d, {%d, %d}}", ip.a, ip.b, ip.c.x, ip.c.y);
	//	return 0;
	//}

// 结构体内存对齐

// 计算 struct 大小

// 如何计算：
// 鹏哥 C 语言 137
// 

// 结构体传参

	//struct S
	//{
	//	int arr[1000];
	//	int num;
	//};
	//void print1(struct S ss) // 传值调用 (空间大)
	//{
	//	int i = 0;
	//	for (i = 0; i < 4; i++)
	//	{
	//		printf("%d\n", ss.arr[i]);
	//	}
	//	printf("%d\n", ss.num);
	//}
	//void print2(struct S* ps) // 传指针调用 (空间小) recommend
	//{
	//	int i = 0;
	//	for (i = 0; i < 4; i++)
	//	{
	//		printf("%d\n", ps->arr[i]);
	//	}
	//	printf("%d\n", ps->num);
	//}
	//int main()
	//{
	//	struct S s = { {1,2,3,4},100 };
	//	print1(s);
	//	print2(&s);
	//	return 0;
	//}

// 位段 (成员类型必须是 整形家族类型) (only struct can use)

	//struct A
	//{
	//	int _a : 2; // 创建 2 bits storage
	//	int _b : 4;
	//	int _c : 10;
	//	int _d : 30;
	//};// 47 bits
	//int main()
	//{
	//	printf("%d\n", sizeof(struct A));
	//	return 0;
	//}

// 位段的内存分配
// 鹏哥 C 语言 140

// 实现通讯录 学了自己写
// 人的信息：
// 1. Name
// 2. Age
// 3. Sex
// 4. Phone Number
// 5. Address

// 功能：
// 1. store 100 people biodata
// 2. add new biodata
// 3. delete biodata 
// 4. search biodata
// 5. modify biodata
// 6. sorting biodata
// 7. display biodata  

// enum type 枚举类型 (可以被列举的)

	// etc.
	//enum day
	//{
	//	// 枚举常量 可改变 +1
	//	Mon,	// 0
	//	Tues,	// 1
	//	Wed,	// ...
	//	Thur = 4,
	//	Fri,
	//	Sat,
	//	Sun
	//};
	//int main()
	//{
	//	enum day d = Fri;
	//	printf("%d\n", Mon);
	//	printf("%d\n", Tues);
	//	printf("%d\n", Wed);
	//	printf("%d\n", Thur);
	//	printf("%d\n", Fri);
	//	printf("%d\n", Sat);
	//	printf("%d\n", Sun);
	//	return 0;
	//}

// union type 共用体类型

	//union Un //共用空间 不会同时用
	//{
	//	int a;
	//	char c;
	//};
	//int main()
	//{
	//	union Un m;
	//	printf("%d\n", sizeof(union Un));
	//	printf("%p\n", &m);
	//	printf("%p\n", &(m.a)); 
	//	printf("%p\n", &(m.c));
	//	return 0;
	//}
