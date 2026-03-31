/* Pointer */

//int main()
//{
//	int a = 10;
//	int* pa = &a;// 地址 a 放在指针变量 pa
//	printf("%p = %d\n", &a, *pa);
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = (char*) & a;
//	*pc = 0;
//	*pa = 0x66778899;
//	// 结论1：
//	// 指针变量类型 在被应用的时候 访问几个 byte
//	printf("pa = %p\n", pa);
//	printf("pa + 1 = %p\n", pa + 1);
//	printf("pc = %p\n", pc);
//	printf("pc + 1 = %p\n", pc + 1);
//	// 结论2：
//	// 指针变量类型 在 + 1 的时候 跳过几个 byte
//	return 0;
//}

// 野指针

//// 野指针是 没有明确指向
//int main()
//{
//	int* p;
//	*p = 10;
//	return 0;
//}

// 指针运算

// 1.指针 +- 整数

//#define N_VALUE 5 
//int main()
//{
//	float value[N_VALUE];
//	float* vp;
//	for (vp = &value[0]; vp < &value[N_VALUE]/*指针比较*/; )
//	{
//		*vp++ = 0;// 指针++
//		// *vp++ != (*vp)++
//		// *vp++ 是指针++
//		// (*vp)++ 是指针里面的内容++
//	}
//	return 0;
//}

// 初始化数组
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		//arr[i] = 5;
//
//		// 用指针初始化
//		 *p = 5;
//		 *p++;
//		 // OR 
//		 // *(p + i) = 5
//	}
//	return 0;
//}

// 2.指针 +- 指针
// 指针 + 指针 可以 但是没有意义

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	// 指针 - 指针 得到的是 指针之间元素个数
//	// 不是所有的指针可以相减
//	// 只有同一个空间的两个指针才能相减
//	return 0;
//}

//int myStr(char* str/*a 的指针*/)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return (str - start);
//}
//int main()
//{
//	int len = myStr("abcdef");
//	printf("%d\n", len);
//	return 0;
//}

// 数组与指针

//int main()
//{
//	int arr[5] = { 0 };
//	int* pa = arr;// 当数组的首元素地址，放在指针变量里面，数组 = 指针
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = i;
//		printf("%d\n", *(pa + i));
//	}
//	return 0;
//}

// 二级指针

//int main()
//{
//	//// 这是一级指针
//	//// 要应用的时候 找一次就找到了
//	//int a = 10;
//	//int* pa = &a;
//	//*pa = 20;
//
//	// 二级指针变量
//	// 要用时 需要找 2 次
//	int b = 0;
//	int* pb = &b;
//	int ** ppb = &pb;
//	**ppb = 10;
//	printf("%d\n", b);
//	return 0;
//
//	// 二级指针是用来存放一级指针
//}

// 指针 数组
// 存放指针的数组

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//
//	int arr[10] = { 0 };
//
//	int* pa = &a;
//	int* pb = &b;
//	int* pc = &c;
//
//	int* parr[10] = { &a, &b, &c };
//
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%2d\n", *parr[i]);
//	}
//	return 0 ;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* parr[10] = { 0 };
//	for (int i = 0; i < 10; i++)
//	{
//		*(arr + i) = i * 10;
//		*(parr + i) = arr + i;
//		printf("%2d\n", *parr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr1[4] = { 1,2,3,4 };
//	int arr2[4] = { 2,3,4,5 };
//	int arr3[4] = { 3,4,5,6 };
//
//	int* parr[3] = { arr1, arr2, arr3 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//			printf("%d ", parr[i][j]);
//		printf("\n");
//	}
//}
