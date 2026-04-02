/* Advanced Pointer */

// 重点

// 1.字符指针
// 2.指针数组
// 3.数组指针
// 4.数组传参 和 指针传参
// 5.函数指针
// 6.函数指针数组
// 7.指向函数指针的指针
// 8.回调指针

// 1.字符指针 char

	//int main()
	//{
	//	// 保存 字符
	//	char ch = 'K';
	//	char* pch = &ch;
	//
	//	// 字符串首字符 a 的地址，赋值给s
	//	char* s = "abcdefg";
	//	char* p = "abcdefg";
	//	printf("%p\n%p\n", s, p);
	//	return 0;
	//}

// 2.指针数组

	// 存放指针的数组
	// int* arr[10] ...
	//int main()
	//{
	//	int arr1[] = { 1,2,3,4,5 };
	//	int arr2[] = { 2,3,4,5,6 };
	//	int arr3[] = { 3,4,5,6,7 };
	//
	//	int* parr[3] = { arr1, arr2, arr3 };
	//
	//	int i = 0;
	//	int j = 0;
	//	for (i = 0; i < 3; i++)
	//	{
	//		for(j = 0; j<5; j++)
	//		{
	//			printf("%d ", *(parr[i] + j));
	//			printf("%d ", parr[i][j]);
	//			//*(p + i) == p[i]
	//		}
	//		printf("\n");
	//	}
	//	return 0;
	//}

// 3.数组指针 - 指向整个数组的指针 

	// int *p[10]	-指针数组
	// int (*p)[10] -数组指针

	// 数组名
	//int main()
	//{
	//	int arr[10] = { 0 };
	//	printf("%p\n", arr);
	//	printf("%p\n", &arr[0]);
	//	printf("%p\n", &arr);
	//
	//	int sz = sizeof(arr);
	//	printf("%d\n", sz);
	//	return 0;
	//}
	// 数组名 通常表示 首元素地址 
	// 但有两个意外
	// 1.sizeof(数组名)，这里表示整个数组
	// 2.&数组名，这里表示整个数组

	// 要存整个数组的地址，就要用到数组指针
	//int main()
	//{
	//	int arr[10] = { 0 };
	//	int* p = arr;
	//	int(*p1)[10/*这里是看arr多少元素*/] = &arr;
	//	return 0;
	//}

// 如何解应用  

// 一维数组解应用 - 比较变扭
	//int main()
	//{
	//	// 比较变扭 (用在一维数组)
	//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	//	int(*p)[10] = &arr;
	//	// 解应用
	//	int i = 0;
	//	int sz = sizeof(arr) / sizeof(arr[0]);
	//	for (i = 0; i < sz; i++)
	//	{
	//		printf("%d\n", *(*p + i));// *p + i 其实还是地址
	//	}
	//	return 0;
	//}

// 二维数组解应用
	//void print(int (*parr)[5], int row, int col)
	//{
	//	int i = 0;
	//	for (i = 0; i < row; i++)
	//	{
	//		int j = 0;
	//		for (j = 0; j < col; j++)
	//		{
	//			printf("%2d ", *(*(parr + i) + j));// *(parr + i) = parr[i]
	//			printf("%2d ", parr[i][j]);//*(parr[i] + j)) = parr[i][j]
	//		}
	//		printf("\n");
	//	}
	//}
	//int main()
	//{
	//	// 二维数组的第 1 row 是数组的首元素地址
	//	int arr[3][5] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15} };
	//	print(arr, 3, 5);// arr = &arr[0]
	//	return 0;
	//}

// 4.数组参数，指针参数
	// 数组传参
	// 一维数组
	// 二维数组

// 5.函数指针 - 指向函数的指针

	// 函数也是有地址
	//int add(int x, int y)
	//{
	//	return x + y;
	//}
	//int main()
	//{
	//	// 对于函数来说
	//	// 函数名 == &函数名 - 取整个函数的地址
	//	printf("%p\n%p\n", add, &add);
	//
	//	// 如何存起来
	//	int/*函数类型*/ (*pf)(int, int/*参数类型*/) = add;
	//
	//	// 如何解应用
	//	printf("%d\n", (*pf)(2, 3));
	//	printf("%d\n", pf(2, 3));// (*) 可以不写
	//	return 0;
	//}

// 函数指针用法

	//int add(int x, int y)
	//{
	//	return x + y;
	//}
	//void calc(int (*pf)(int, int))
	//{
	//	printf("%d\n", pf(3, 5));
	//}
	//int main()
	//{
	//	calc(add);
	//	return 0;
	//}

	// 写个计算机 + - * /
	//int add(int x, int y)
	//{
	//	return x + y;
	//}
	//int sub(int x, int y)
	//{
	//	return x - y;
	//}
	//int mul(int x, int y)
	//{
	//	return x * y;
	//}
	//int div(int x, int y)
	//{
	//	return x / y;
	//}
	//void calc(int (*pf)(int, int)) 
	//{
	//	int x = 0;
	//	int y = 0;
	//	int ret = 0;
	//	printf("Your numbers:");
	//	scanf("%d %d", &x, &y);
	//	ret = pf(x, y);
	//	printf("Your answer = %d\n", ret);
	//}
	//void menu()
	//{
	//	printf("------------------\n");
	//	printf("------1.Add-------\n");
	//	printf("------2.Sub-------\n");
	//	printf("------3.Mul-------\n");
	//	printf("------4.Div-------\n");
	//	printf("------0.Exit------\n");
	//	printf("------------------\n");
	//}
	//int main()
	//{
	//	int input = 0;
	//	
	//	do {
	//		menu();
	//		printf("Your decision:");
	// 		scanf("%d", &input);
	//		// 重复性高
	//		switch (input)
	//		{
	//		case 1:
	//			calc(add);
	//			break;
	//		case 2:
	//			calc(sub);
	//			break;
	//		case 3:
	//			calc(mul);
	//			break;
	//		case 4:
	//			calc(div);
	//			break;
	//		case 0:
	//			break;
	//		default:
	//			printf("Try again\n\n");
	//			break;
	//		}
	//	}while (input);
	//	return 0;
	//}

// 6.函数指针数组 - 存放函数指针的数组

// 要存放/解应用 函数指针 在数组里，每个元素的 返回类型 参数类型 一定要都一样
	//int add(int x, int y)
	//{
	//	return x + y;
	//}
	//int sub(int x, int y)
	//{
	//	return x - y;
	//}
	//int mul(int x, int y)
	//{
	//	return x * y;
	//}
	//int div(int x, int y)
	//{
	//	return x / y;
	//}
	//int main()
	//{
	//	int (*arr[4])(int, int) = { add, sub, mul, div };// 存放
	//	int i = 0;
	//	for (i = 0; i < 4; i++)
	//	{
	//		printf("%d ", arr[i](8, 4));// 解应用
	//	}
	//	return 0;
	//}

// 函数指针数组用法

	//int add(int x, int y)
	//{
	//	return x + y;
	//}
	//int sub(int x, int y)
	//{
	//	return x - y;
	//}
	//int mul(int x, int y)
	//{
	//	return x * y;
	//}
	//int div(int x, int y)
	//{
	//	return x / y;
	//}
	//void menu()
	//{
	//	printf("------------------\n");
	//	printf("------1.Add-------\n");
	//	printf("------2.Sub-------\n");
	//	printf("------3.Mul-------\n");
	//	printf("------4.Div-------\n");
	//	printf("------0.Exit------\n");
	//	printf("------------------\n");
	//}
	//int main()
	//{
	//	int input = 0;
	//	int x = 0;
	//	int y = 0;
	//	int ret = 0;
	//	int (*pfarr[5])(int, int) = { 0, add, sub, mul, div };
	//	do {
	//		menu();
	//		printf("Your decision:");
	//	 	scanf("%d", &input);
	//		if (input == 0)
	//		{
	//			printf("Exit\n");
	//		}
	//		else if (input >= 1 && input <= 4)
	//		{
	//			printf("Enter 2 numbers:");
	//			scanf("%d %d", &x, &y);
	//			printf("%d\n", pfarr[input](x, y));
	//		}
	//		else printf("Invalid input, please try again!\n");
	//	}while (input);
	//	return 0;
	//}

// 7.指向函数指针数组的指针

	//int main()
	//{
	//	// 函数指针数组
	//	int (*pfarr[])(int, int) = { 0 };
	//	// 指向 函数指针数组 的指针
	//	int (*(*ppfarr)[])(int, int) = &pfarr;
	//	return 0;
	//}

// 8.回调指针

// Example - 冒泡排序 bubble sort

	//void bubble_sort(int arr[], int sz)// 缺点是只能排 integer type
	//{
	//	int i = 0;
	//	for (i = 0; i < sz; i++)
	//	{
	//		int flag = 1;// 假设数组已经排好序了
	//		int j = 0;
	//		for (j = 0; j < sz - 1 - i; j++)
	//		{
	//			if(arr[j] > arr[j + 1])
	//			{
	//				int tmp = arr[j];
	//				arr[j] = arr[j + 1];
	//				arr[j + 1] = tmp;
	//				flag = 0;
	//			}
	//		}
	//		if (flag)
	//			break;
	//	}
	//}
	//int main()
	//{
	//	int arr[] = { 7,3,5,2,1,4,9,0,5 };
	//	// Ascending order - 升序
	//	int sz = sizeof(arr) / sizeof(arr[0]);
	//	bubble_sort(arr, sz);
	//	int i = 0;
	//	for (i = 0; i < sz; i++)
	//	{
	//		printf("%d ", arr[i]);
	//	}
	//	return 0;
	//}

// qsort - void qsort - (void* base, size_t num, size_t size, int (*compar)(const void*,const void*));

	//int cmp_int(const void* e1, const void* e2)
	//{
	//	// return *(int*)e1 - *(int*)e2;// Ascending order - 升序
	//	return *(int*)e2 - *(int*)e1;// Decreasing order - 降序
	//}
	//void test1()
	//{
	//	int arr[] = { 7,3,5,2,1,4,9,0,5 };
	//	int sz = sizeof(arr) / sizeof(arr[0]);
	//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	//	int i = 0;
	//	for (i = 0; i < sz; i++)
	//	{
	//		printf("%d ", arr[i]);
	//	}
	//}
	//struct Stu
	//{
	//	char name[20];
	//	int age;
	//};
	//int cmp_stu_by_name(const void* e1, const void* e2)
	//{
	//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
	//}
	//void test2()
	//{
	//	struct Stu s[] = { {"Teck Onn", 21}, {"Joo Wen", 22}, {"Kong Tay", 42} };
	//	int sz_struct = sizeof(s) / sizeof(s[0]);
	//	bubblesort(s, sz_struct, sizeof(s[0]), cmp_stu_by_name);
	//}
	//int main()
	//{
	//	// test1()
	//	test2();
	//	return 0;
	//}

// 用 qsort 的想法，做 bubble sort

	//void Swap(char* buf1, char* buf2, int width)
	//{
	//	int i = 0;
	//	for (i = 0; i < width; i++)
	//	{
	//		char tmp = *buf1;
	//		*buf1 = *buf2;
	//		*buf2 = tmp;
	//		buf1++;
	//		buf2++;
	//	}
	//}
	//void bubblesort(void* base, int sz, int width, int (*cmp)(const void*, const void*))
	//{
	//	int i = 0;
	//	for (i = 0; i < sz; i++)
	//	{
	//		int flag = 1;
	//		int j = 0;
	//		for (j = 0; j < sz - 1 - i; j++)
	//		{
	//			if (cmp((char*)base + j * width, (char*)base + (j + 1)*width) > 0)
	//			{
	//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
	//				flag = 0;
	//			}
	//		}
	//		if (flag)
	//			break;
	//	}
	//}
	//int cmp(const void* e1, const void* e2)
	//{
	//	return (*(int*)e1 - *(int*)e2);
	//}
	//int main()
	//{
	//	int nums[] = { 5,8,4,26,18,4,20,0,9,41 };
	//	int sz = sizeof(nums) / sizeof(nums[0]);
	//	bubblesort(nums, sz, sizeof(nums[0]), cmp);
	//	int i = 0;
	//	for (i = 0; i < sz; i++)
	//	{
	//		printf("%d ", nums[i]);
	//	}
	//	return 0;
	//}

// void* type - 没有具体类型的 指针类型
// 不能 解应用，不能加，不能减

	//int main()
	//{
	//	int a = 10;
	//	// char* pa = &a; // 有不兼容的问题
	//	void* pa = &a; // 可以接受所有 指针类型
	//	return 0;
	//}

