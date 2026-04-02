/* String Nad Memory Function */

// 字符串函数

// 长度不受限函数 (不推荐)

// strlen 

	// strlen return type is size_t = unsigned int//int main()
	//{
	//	char name[] = "Kong";// Kong\0
	//	char name1[] = { 'T', 'e', 'c', 'k' };
	//	printf("%d\n", strlen(name));
	//	printf("%d\n", strlen(name1));
	//	return 0;
	//}

// 模拟实现 strlen

	//#include<assert.h>
	//size_t my_strlen(const char * name)
	//{
	//	int count = 0;
	//	assert(name);
	//	while (*name != '\0')
	//	{
	//		count++;
	//		name++;
	//	}
	//	return count;
	//}
	//int main()
	//{
	//	char name[] = "Kong Teck Onn";
	//	size_t len = my_strlen(name);
	//	printf("%u\n", len);
	//	return 0;
	//}

// strcpy 到 \0 停止 copy

	//int main()
	//{
	//	char name[20] = "0";
	//	strcpy(name, "Kong Teck Onn");
	//	printf("%s\n", name);
	//	return 0;
	//}

// 模拟实现 strcpy

	//#include<assert.h>
	////void my_strcpy(char* e1, const char* e2)// 残次版
	////{
	////	assert(e1);
	////	assert(e2);
	////	int i = 0;
	////	while (e2[i])
	////	{
	////		e1[i] = e2[i];
	////		i++;
	////	}
	////	e1[i] = e2[i];
	////}
	//char* my_strcpy(char* e1, const char* e2)// 残次版
	//{
	//	assert(e1);
	//	assert(e2);
	//	while (*e1++ = *e2++);
	//	return e1;
	//}
	//int main()
	//{
	//	char arr1[] = "abcdef";
	//	char arr2[10] = "0";
	//	my_strcpy(arr2, arr1);
	//	printf("%s\n", arr2);
	//	return 0;
	//}

// strcat

	//int main()
	//{
	//	char arr[20] = "Hello";
	//	strcat(arr, " World");
	//	printf("%s\n", arr);
	//	return 0;
	//}

// 模拟实现 strcat

	//#include<assert.h>
	//char* my_strcat(char* dest, const char* src)
	//{
	//	assert(dest && src);
	//	while (*dest)
	//	{
	//		dest++;
	//	}
	//	while (*dest++ = *src++);
	//	return dest;
	//}
	//int main()
	//{
	//	char arr[20] = "Hello";
	//	my_strcat(arr, " World");
	//	printf("%s\n", arr);
	//	return 0;
	//}

// strcmp

	//int main()
	//{
	//	char arr1[20] = "Kong Teck Onn";
	//	char arr2[] = "Kong";
	//	printf("%d\n", strcmp(arr1, arr2));
	//	return 0;
	//}

// 模拟实现

	//#include<assert.h>
	//int my_strcmp(const char* str1, const char* str2)
	//{
	//	assert(str1 && str2);
	//	while (*str1 == *str2)
	//	{
	//		if (*str1 == '\0')
	//			return 0;
	//		str1++;
	//		str2++;
	//	}
	//	return *str1 - *str2;
	//}
	//int main()
	//{
	//	char arr1[20] = "Kong Teck Onn";
	//	char arr2[] = "Kong";
	//	printf("%d\n", my_strcmp(arr1, arr2));
	//	return 0;
	//}

// 长度受限函数 (safe) exercise 模拟实现

// strncpy

	//int main()
	//{
	//	char arr1[20] = "Kong Teck Onn";
	//	char arr2[20] = "Joo Wen";
	//	strncpy(arr1 + 5, arr2, 8);
	//	return 0;
	//}

// 模拟实现

	//#include<assert.h>
	//char* my_strncpy(char* dest, const char* src, size_t n)
	//{
	//	assert(dest && src);
	//	char* ret = dest;
	//	while (n--)
	//	{
	//		*dest = *src;
	//		dest++;
	//		src++;
	//	}
	//	return ret;
	//}
	//// 库函数
	//char* my_strncpy(char* dest, const char* src, size_t n)
	//{
	//	char* start = dest;
	//	while (n && (*dest++ = *src++) != '\0')    /* copy string */
	//		n--;
	//	if (n)                              /* pad out with zeroes */
	//		while (--n)
	//			*dest++ = '\0';
	//	return(start);
	//}
	//int main()
	//{
	//	char arr1[20] = "Kong Teck Onn";
	//	char arr2[20] = "Joo Wen";
	//	my_strncpy(arr1 + 5, arr2, 8);
	//	return 0;
	//}

// strncmp

	//int main()
	//{
	//	char arr1[] = "abcdef";
	//	char arr2[] = "abc";
	//	printf("%d\n", strncmp(arr1, arr2, 3));
	//	return 0;
	//}

// 模拟实现

	//#include<assert.h>
	//int my_strncmp(char const* arr1, const char* arr2, size_t bit)
	//{
	//	assert(arr1 && arr2);
	//	while ((*arr1 == *arr2) && (bit != 0))
	//	{
	//		arr1++;
	//		arr2++;
	//		bit--;
	//	}
	//	if(bit == 0) 
	//		return 0;
	//	else 
	//		return *arr1 - *arr2;
	//}
	//int main()
	//{
	//	char arr1[] = "abcdef";
	//	char arr2[] = "abcf";
	//	printf("%d\n", my_strncmp(arr1, arr2, 3));
	//	return 0;
	//}

// strncat

	//int main()
	//{
	//	char arr1[30] = "Kong Teck Onn & ";
	//	char arr2[20] = "Joo Wen";
	//	strncat(arr1, arr2, 8);
	//	return 0;
	//}

//模拟实现

	//#include<assert.h>
	//char* my_strncat(char* dest, const char* src, size_t bit)
	//{
	//	assert(dest && src);
	//	char* ret = dest;
	//	while (*dest != '\0')
	//		dest++;
	//	while (((*dest = *src) != '\0') && (bit != 0))
	//	{
	//		dest++;
	//		src++;
	//		bit--;
	//	}
	//	return ret;
	//}
	//// 库函数 很巧妙
	//char* strncat(char* front, const char* back, size_t count) {
	//	char* start = front;
	//	while (*front++);// 执行完了 front自身加一
	//	front--;// 防止越界 front--
	//	while (count--)// when count == 0 stop repeat
	//		if ((*front++ = *back++) == 0)// (*front++ = *back++) 真的话为1, 1!=0
	//			return(start);
	//	*front = '\0';
	//	return(start);
	//}
	//int main()
	//{
	//	char arr1[40] = "Kong Teck Onn & ";
	//	char arr2[20] = "Joo Wen";
	//	strncat(arr1, arr2, 3);
	//	printf("%s\n", arr1);
	//	return 0;
	//}

// strstr 字符串中找字符串

	//int main()
	//{
	//	char arr1[] = "Kong Teck Onn";
	//	char arr2[] = "Teck";
	//	char* ret = strstr(arr1, arr2);
	//	if (ret == NULL)
	//	{
	//		printf("no inside\n");
	//	}
	//	else
	//	{
	//		printf("%s\n", ret);
	//	}
	//	return 0;
	//}

// 模拟实现

	//#include<assert.h>
	////char* my_strstr(const char* str1, const char* str2)
	////{
	////	assert(str1 && str2);
	////	if (*str2 == '\0')
	////		return (char*)str1;
	////	int s1 = 0;
	////	int s2 = 0;
	////	int i = 0;
	////	for (s1 = 0; str1[s1] != '\0'; s1++)
	////	{
	////		i = 0;
	////		s2 = 0;
	////		while (str1[s1 + i] == str2[s2] && str2[s2] != '\0')
	////		{
	////			i++;
	////			s2++;
	////		}
	////		if (str2[s2] == '\0')
	////			return (char*)str1 + s1;
	////	}
	////	return NULL;
	////}
	//char* my_strstr(const char* str1, const char* str2)
	//{
	//	assert(str1 && str2);
	//	const char* s1 = str1;
	//	char const* s2 = str2;
	//	const char* p = str1;
	//	while (*p)
	//	{
	//		s1 = p;
	//		s2 = str2;
	//		while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	//		{
	//			s1++;
	//			s2++;
	//		}
	//		if (*s2 == '\0')
	//			return p;
	//		p++;
	//	}
	//	return NULL;
	//}
	//int main()
	//{
	//	char arr1[] = "abbbcdef";
	//	char arr2[] = "bbc";
	//	char* ret = my_strstr(arr1, arr2);
	//	if (ret == NULL)
	//	{
	//		printf("no inside\n");
	//	}
	//	else
	//	{
	//		printf("%s\n", ret);
	//	}
	//	return 0;
	//}

// strtok (cut string)

	//int main()
	//{
	//	const char* sep = " ";
	//	char name[] = "Kong Teck Onn";
	//	char tmp[20] = { 0 };
	//	strcpy(tmp, name);
	//	printf("%s\n", strtok(tmp, sep));
	//	printf("%s\n", strtok(NULL, sep));
	//	printf("%s\n", strtok(NULL, sep));
	//	return 0;
	//}

// strerror

	//#include<errno.h>
	//int main()
	//{
	//	/*printf("%s\n", strerror(0));
	//	printf("%s\n", strerror(1));
	//	printf("%s\n", strerror(2));
	//	printf("%s\n", strerror(3));*/
	//	FILE* pf = fopen("C:\\DEV - C++\\110518.c", "r");
	//	if (pf == NULL)
	//	{
	//		printf("%s\n", strerror(errno));
	//	}
	//	else printf("haha\n");
	//	return 0;
	//}

// memcpy 不能重叠 copy

	//int main()
	//{
	//	int arr1[] = { 0,1,2,3,4,5,6,7,8,9 };
	//	int arr2[10] = { 0 };
	//	memcpy(arr2, arr1, sizeof(arr1));
	//	return 0;
	//}

// 模拟实现

	//#include<assert.h>
	//void* my_memcpy(void* dest, const void* src, size_t num)
	//{
	//	assert(dest && src);
	//	void* ret = dest;
	//	while(num--)
	//	{
	//		*((char*)dest) = *((char*)src);
	//		dest = (char*)dest + 1;
	//		src = (char*)src + 1;
	//	}
	//	return ret;
	//}
	//int main()
	//{
	//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	//	int arr2[10] = { 0 };
	//	my_memcpy(arr2, arr1, sizeof(arr1));
	//	return 0;
	//}

// memmove 能重叠 copy

	//int main()
	//{
	//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	//	int arr2[10] = { 0 };
	//	memmove(arr1 + 2, arr1, 20);
	//	return 0;
	//}

// 模拟实现

//#include<assert.h>
//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	char* ret = dest;
//	if (dest < src)
//	{
//		while(num--)
//		{
//			*((char*)dest) = *((char*)src);
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 0 };
//	my_memmove(arr1, arr1 + 2, 20);
//	return 0;
//}

// memcmp

	//int main()
	//{
	//	int arr1[20] = { 1,2,3,4,5,6,7,8,9,10 };
	//	int arr2[20] = { 1,2,3,4,5,6,7,8,9,10 };
	//	printf("%d\n", memcmp(arr1, arr2, sizeof(arr1)));
	//	return 0;
	//}

// memset

	//int main()
	//{
	//	char arr[20] = "Hello World";
	//	memset(arr + 6, 'x', 5);
	//	printf("%s\n", arr);
	//	return 0;
	//}

