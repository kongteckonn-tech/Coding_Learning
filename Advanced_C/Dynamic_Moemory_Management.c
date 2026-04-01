/* Dynamic Memory Management */

// malloc 无初始化的开辟

// void* malloc(size_t size);

	//int main()
	//{
	//	int arr[10] = { 0 };
	//	int* p = (int*)malloc(40);
	//	if (p == NULL)
	//	{
	//		printf("%s\n", strerror(errno));
	//		return 1;
	//	}
	//	int i = 0;
	//	for (i = 0; i < 10; i++)
	//	{
	//		*(p+i) = i;
	//		printf("%d ", *(p+i));
	//	}
	//	return 0;
	//}

// calloc 初始化的开辟

// void* calloc (size_t num, size_t size); num 开辟多少元素，size 每个元素多少byte
// 初始化 为 0

	//int main()
	//{
	//	int* p = (int*)calloc(10, sizeof(int));
	//	if (p == NULL)
	//	{
	//		printf("%s\n", strerror(errno));
	//		return 1;
	//	}
	//	int i = 0;
	//	for (i = 0; i < 10; i++)
	//	{
	//		printf("%d\n", *(p + i));
	//	}
	//	free(p);
	//	p = NULL;
	//	return 0;
	//}

// realloc

// void* realloc (void* ptr, size_t size); 
// ptr 要修改的起始位置， size ： New size for the memory block, in bytes.
// 返回地址 可能与 传参地址 有不一样
// 如果 他改变位置了 他会把之前的空间释放掉

// realloc(NULL, 40) == malloc(40)

	//int main()
	//{
	//	// create storage
	//	int* p = (int*)malloc(40);
	//	if (p == NULL)
	//	{
	//		printf("%s\n", strerror(errno));
	//		return 1;
	//	}
	//	// initialization
	//	int i = 0;
	//	for (i = 0; i < 10; i++)
	//	{
	//		*(p + i) = i + 1;
	//	}
	//	// add storage 40 bytes
	//	int* ptr = (int*)realloc(p, 80);
	//	if (ptr != NULL)
	//	{
	//		p = ptr;
	//	}
	//	for (i = 0; i < 10; i++)
	//	{
	//		printf("%d\n", *(p + i));
	//	}
	//	free(p);
	//	p = NULL;
	//	return 0;
	//}

// free 释放空间

	//int main()
	//{
	//	int* p = (int*)malloc(40);
	//	free(p);
	//	p = NULL;
	//	return 0;
	//}

// 一定要 free 不然会导致 内存泄漏

	//int main()
	//{
	//	while (1)
	//	{
	//		malloc(1);// 不要试，会死机
	//	}
	//	return 0;
	//}

// 内核空间 用户不能修改

// 栈区

// 内存映射段

// 堆区
// malloc 
// calloc
// realloc

// 数据段 / 静态区
// 全局变量

// 代码段
