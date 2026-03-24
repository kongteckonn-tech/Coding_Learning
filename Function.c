// Function

// 1. 库函数 (c语言自带的)
;
// 库函数的使用 都要包含头文件
// https://cplusplus.com/reference/
// IO function (input, output)
// 字符串 function
	//Example
	//strcpy 
	//#include <stdio.h>
	//#include <string.h>
	//int main()
	//{
	//	char str1[] = "Sample string";
	//	char str2[40];
	//	char str3[40];
	//	strcpy(str2, str1);//char * strcpy (char * destination,const char * source);
	//	strcpy(str3, "copy successful");
	//	printf("str1: %s\nstr2: %s\nstr3: %s\n", str1, str2, str3);
	//	return 0;
	//}
// 字符 function
// 内存/指针 function
// 时间 function
// 数学 function
// 其他 function

// 2. 自定义函数

//(返回类型) name (参数，可以多个) {return__;如不要返回不用写，返回类型写void}
;
////当有返回值时可以用int, char, float, double. 当不需要返回值 void
//int max(int x, int y)//这边的 x,y 是要跟 q,w 的类型
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int q = 0;
//	int w = 0;
//	scanf("%d %d", &q, &w);
//	int i = max(q, w);//获取最大值 然后穿给 i
//	printf("%d\n", i);
//	return 0;
//}
;
//char /*return 是什么类型，这里也要跟这个类型*/ percentage()
//{
//	return 37;
//}
//int main()
//{
//	printf("%c", percentage());
//	return 0;
//}
;
//交换
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;//间接改
//	a = 20;//直接改
//	return 0;
//}
//void exchange(int*px, int*py)//有独立空间，临时拷贝，不会影响原本
//{
//	//int z = 0;
//	//z = x;
//	//x = y;
//	//y = z;//没换到，有问题。因为 x, y 不会影响到 a, b
//	int z = *px;
//	*px = *py;
//	*py = z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("before a=%d, before b=%d\n", a, b);
//	//exchange(a, b);//交换
//	exchange(&a, &b);
//	printf("after a=%d, after b=%d\n",a, b);
//	return 0;
//}
//当函数要影响到 main 函数 就要用 *px

//参数
;
// 1. 实参 (常量，变量，函数(一定要有return))
// 2. 形参 (函数还没用的时候不会占用空间, 作用域在{}里)
// 实参和形参可以相同也可以不同
// 实参传给形参，形参是实参的临时拷贝

// 调用

// 1. 传值调用 (传值)
// 2. 传址调用 (传地址，临时拷贝，会建立联系)

//练习

//判断 100-200 素数(只能被自身和 1 整除的)

//循环版
;
//int main()
//{
//	int i = 0;
//	int count = 0;
//	//for (i = 100; i <= 200; i++)
//	for (i = 101; i <= 200; i += 2)//优化：偶数不可能是素数
//	{
//		int flag = 1;
//		int j = 0;
//		//for (j = 2; j <= i - 1; j++)
//		for (j = 2; j <= sqrt(i); j++)//优化：m = a*b,a 和 b 其中一个必须是 <= sqrt(m)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d\n", i);
//		}
//	}
//	printf("count = %d", count);
//	return 0;
//}

//函数版
;
//int prime_n(int n)
//{
//	int x = 0;
//	for (x = 2; x <= sqrt(n); x++)
//	{
//		if (n % x == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		if (prime_n(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d", count);
//	return 0;
//}

//判断闰年 leap year
// i. 能被 4 整除，不能被 100 整除
// ii. 能被 400 整除
// ((n % 4 == 0)&&(n % 100 != 0))||(n % 400 == 0)

//循环版
;
// int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//if (year % 4 == 0)
//		//{
//		//	if (year % 100 != 0)// != 不等于
//		//	{
//		//		printf("%d ", year);
//		//		count++;
//		//	}
//		//}
//		//if (year % 400 == 0)
//		//{
//		//	printf("%d ", year);
//		//	count++;
//		//}
//		//优化：
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%d ",year);
//			count ++;
//		}
//	}
//	printf("\ncount = %d", count);
//	return 0;
//}

//函数版
;
//int leap_year(int n)
//{
//	if (((n % 4 == 0) && (n % 100 != 0)) || (n % 400 == 0))
//	{
//		return 1;//是闰年返回 1
//	}
//	else return 0;//非闰年返回 0
//}
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (leap_year(year))
//		{
//			printf("%d ", year);
//			count ++;
//		}
//	}
//	printf("\nCount = %d", count);
//	return 0;
//}

//函数的二分查找
;
//int binary_search(int num[]/*这边是 num[0] 的指针变量*/, int x, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (num[mid] < x)
//		{
//			left = mid + 1;
//		}
//		else if (num[mid] > x)
//		{
//			right = mid - 1;
//		}
//		else return mid;
//	}
//	return -1;
//}
//int main()
//{
//	int num[50] = { 0 };
//	int size = sizeof(num) / sizeof(num[0]);
//	int r = 0;
//	int y = 0;
//	int i = 0;
//	for (r = 0, i = 2; r < size; r ++, i += 2)
//	{
//		num[r] = i;
//	}
//	scanf("%d", &y);
//	//找到了，返回下标，没有找到，返回-1
//	int find = binary_search(num, y, size);
//	if (find == -1)
//	{
//		printf("Not Found\n");
//	}
//	else//分 st, nd, rd, th
//	{
//		int input = find + 1;
//		int last_digit = input % 10;
//		int last_two_digits = input % 100;
//
//		if (last_two_digits >= 11 && last_two_digits <= 13)
//			printf("%dth ", input);
//		else if (last_digit == 1)
//			printf("%dst ",input);
//		else if (last_digit == 2)
//			printf("%dnd ", input);
//		else if (last_digit == 3)
//			printf("%drd ", input);
//		else printf("%dth ", input);
//	}
//	return 0;
//}
;
////#include <stdio.h>
////#include <stdlib.h>
//#include <ctype.h>
//
//int binarySearch(int* nums, int numsSize, int target) {
//    int left = 0, right = numsSize - 1;
//    while (left <= right) {
//        int mid = left + (right - left) / 2;
//        if (nums[mid] == target) return mid;
//        else if (nums[mid] < target) left = mid + 1;
//        else right = mid - 1;
//    }
//    return -1;
//}
//
//// 读取一个整数
//int readInt() {
//    int num = 0, sign = 1;
//    char ch = getchar();
//
//    while (isspace(ch)) ch = getchar();  // 跳过空白字符
//
//    if (ch == '-') {
//        sign = -1;
//        ch = getchar();
//    }
//
//    while (isdigit(ch)) {
//        num = num * 10 + (ch - '0');
//        ch = getchar();
//    }
//
//    ungetc(ch, stdin);  // 退回最后一个非数字字符
//    return num * sign;
//}
//
//int main() {
//    int capacity = 16;
//    int size = 0;
//    int* nums = (int*)malloc(capacity * sizeof(int));
//
//    char ch;
//    printf("Enter array ( in form : [ num1 num2 ... numN ])\n");
//
//    // 等待 [
//    do {
//        ch = getchar();
//    } while (ch != '[');
//
//    // 读取数字直到 ]
//    while (1) {
//        ch = getchar();
//        if (ch == ']') break;
//
//        if (isdigit(ch) || ch == '-' || isspace(ch)) {
//            ungetc(ch, stdin);
//
//            if (size >= capacity) {
//                capacity *= 2;
//                nums = (int*)realloc(nums, capacity * sizeof(int));
//            }
//
//            nums[size++] = readInt();
//        }
//    }
//
//    // 输入目标值
//    int target;
//    printf("Your Target is : ");
//    scanf("%d", &target);
//
//    // 二分查找
//    int result = binarySearch(nums, size, target);
//    if (result != -1) {
//        printf("Target %d Subscript: %d\n", target, result);
//    }
//    else {
//        printf("Target %d Not Found\n", target);
//    }
//
//    free(nums);
//    return 0;
//}

//bool 类型(true / false), 头文件 stdbool.h true == 1, false == 0
;
//bool prime_n(int n)
//{
//	int x = 0;
//	for (x = 2; x <= sqrt(n); x++)
//	{
//		if (n % x == 0)
//		{
//			return false;
//		}
//	}
//	return true;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		if (prime_n(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d", count);
//	return 0;
//}

//写函数每调用函数 num++

//void add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	add(&num);
//	printf("%d\n", num);
//	add(&num);
//	printf("%d\n", num);
//	add(&num);
//	printf("%d\n", num);
//	add(&num);
//	printf("%d\n", num);
//	return 0;
//}

//函数的嵌套调用 (函数互相调用) 

//链式访问
;
//int main()
//{
//	int len = strlen("KTO handsome");
//	printf("%d\n", len);
//	//链式访问:
//	printf("%d\n", strlen("KTO handsome"));
//	
//	//printf return value : the total number of characters written is returned.
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}

//函数声明和定义
;
//int add(int x, int y);//函数声明 (函数在 main 以下要跟编辑器讲)
////告诉编辑器 函数名字，参数，返回类型。存在不存在是 函数定义决定
//int main()
//{
//	int a = 40;
//	int b = 50;
//	int sum = add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
//int add(int x, int y)//函数定义
//{
//	return x + y;
//}

//自定义头文件 "add.h"
;
//#include "add.h"
//int main()
//{
//	int a = 40;
//	int b = 50;
//	int sum = add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

//函数递归 (把大事化小) (要会流动)

//做无符号整型(unsigned int) 输入 1234 输出 1 2 3 4
;
//void print(unsigned long long n)
//{
//	if (n > 9)
//	{
//		print(n / 10);//函数里 还有一样的函数, 像循环
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned long long num = 0;
//	scanf("%lld", &num);
//	//printf("%d\n", num);//%d 是打印有符号的整形 (+/-), %u 是打印无符号的整形(无 -)
//	//while (num)
//	//{
//	//	printf("%d ", num % 10);
//	//	num /= 10;//结果是 4 3 2 1 不符合
//	//}
//
//	//递归(必须是函数)：
//	print(num);
//	return 0;
//}

//求字符串长度 (使用递归)
;
//普通：
//int str_len(char* arr)
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//int main()
//{
//	char len = str_len("qwert");
//	int len = strlen("qwer\n");
//	printf("%d\n", len);
//	return 0;
//}

//递归：
;
//int str_len(char* arr)
//{
//	if (*arr != '\0')
//		return 1 + str_len(arr+1);
//	else 
//		return 0;
//}
//int main()
//{
//	int len = str_len("qwertyuio\n");
//	printf("%d\n", len);
//	return 0;
//}

// 函数迭代

//n 阶乘
;
//递归：
//int fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else return n * fac(n - 1);
//}
//迭代(循环)：
//int fac(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fac(n);
//	printf("ret = %d\n", ret);
//	return 0;
//}

// 递归(计算量太大，效率低) --可换成--> 迭代
//第 n 的Fibonacci sequence (0、1、1、2、3、5、8、13、21、34)
;
////递归：
////long long fib(int n)//计算量太大，效率低
////{
////	if (n <= 2)
////	{
////		return 1;
////	}
////	else return fib(n - 1) + fib(n - 2);
////}
////迭代：
//long long fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	if (n == 1 || n == 2)
//		return 1;
//	else if (n == 0)
//		return 0;
//	else
//	{
//		while (n > 2)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//			n--;
//		}
//		return c;
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	long long ret = fib(n);
//	printf("%lld\n", ret);
//	return 0;
//}
;
//int main() {
//
//	int a;
//	scanf("%d", &a);
//
//	long long sz[50] = { 0,1 };
//
//	int i;
//	for (i = 2; i < a; i++) {
//		sz[i] = sz[i - 1] + sz[i - 2];
//	}
//	printf("%lld", sz[a - 1]);
//
//	return 0;
//}

//汉诺塔 (学了自己写)
;
//void move(char from, char to)
//{
//	printf("%c-->%c ", from, to);
//}
//void hanoi(int n, char pos1, char pos2, char pos3)
////pos1 : 开始，pos2 : 中转，pos3 : 结束
//{
//	if (1 == n)
//	{
//		move(pos1, pos3);
//	}
//	else
//	{
//		hanoi(n - 1, pos1, pos3, pos2);
//		move(pos1, pos3);
//		hanoi(n - 1, pos2, pos1, pos3);
//	}
//}
//int main()
//{
//	int n = 0;
//	char a = 'A';
//	char b = 'B';
//	char c = 'C';
//	scanf("%d", &n);
//	hanoi(n, a, b, c);
//	return 0;
//}
