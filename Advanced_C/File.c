#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<errno.h>

// 文件使用
// 1. 文件打开
// 2. input/output
// 3. 文件关闭

// 文件指针

	//int main()
	//{
	//	FILE* pf;// 文件指针
	//	return 0;
	//}

// fopen fclose 文件打开/关闭
// FILE * fopen ( const char * filename, const char * mode );

	//int main()
	//{
	//	// 文件开启
	//	FILE* pf = fopen("C:\\Users\\USER\\OneDrive\\Desktop\\teck.txt", "w");
	//	if (pf == NULL)
	//	{
	//		printf("%s\n", strerror(errno));
	//		return 1;
	//	}
	//	// 文件关闭
	//	fclose(pf);
	//	pf = NULL;
	//	return 0;
	//}

// fputc output '字符'
// int fputc ( int character, FILE * stream );

	//int main()
	//{
	//	FILE* pf = fopen("C:\\Users\\USER\\OneDrive\\Desktop\\teck.txt", "w");
	//	if (pf == NULL)
	//	{
	//		printf("%s\n", strerror(errno));
	//		return 1;
	//	}
	//	fputc('K', pf);
	//	fputc('o', pf);
	//	fputc('n', pf);
	//	fputc('g', pf);
	//	fputc(' ', pf);
	//	char i = 0;
	//	for (i = 'a'; i < 'z'; i++)
	//	{
	//		fputc(i, pf);
	//	}
	//	fclose(pf);
	//	pf = NULL;
	//	return 0;
	//}

// fgetc input '字符'
// int fgetc ( FILE * stream );

	//int main()
	//{
	//	FILE* pf = fopen("C:\\Users\\USER\\OneDrive\\Desktop\\teck.txt", "r");
	//	if (pf == NULL)
	//	{
	//		printf("%s\n", strerror(errno));
	//		return 1;
	//	}
	//	int n = 0;
	//	while ((n = fgetc(pf)) != EOF)
	//	{
	//		printf("%c ", n);
	//	}
	//	fclose(pf);
	//	pf = NULL;
	//	return 0;
	//}

// fputs output "字符串"
// int fputs ( const char * str, FILE * stream );

	//int main()
	//{
	//	FILE* pf = fopen("C:\\Users\\USER\\OneDrive\\Desktop\\teck.txt", "w");
	//	if (pf == NULL)
	//	{
	//		printf("%s\n", strerror(errno));
	//		return 1;
	//	}
	//	fputs("Kong Teck Onn", pf);
	//	fclose(pf);
	//	pf = NULL;
	//	return 0;
	//}

// fgets input "字符串"
// char * fgets ( char * str, int num, FILE * stream );

	//int main()
	//{
	//	FILE* pf = fopen("C:\\Users\\USER\\OneDrive\\Desktop\\teck.txt", "r");
	//	if (pf == NULL)
	//	{
	//		printf("%s\n", strerror(errno));// = perror("fopen");
	//		return 1;
	//	}
	//	char arr[10];
	//	char* ppf = fgets(arr, 10, pf);// \0 算一个
	//	if (ppf == NULL)
	//	{
	//		perror("fgets");
	//		return 1;
	//	}
	//	printf(ppf);
	//	printf("\n");
	//	printf(arr);
	//	// 安全起见最好用 arr
	//	fclose(pf);
	//	pf = NULL;
	//	return 0;
	//}

// fprintf 格式化output
// int fprintf ( FILE * stream, const char * format, ... );

	//struct s
	//{
	//	char name[20];
	//	int age;
	//	float width;
	//};
	//int main()
	//{
	//	struct s S = { "Kong", 20, 74.5f };
	//	FILE* pf = fopen("C:\\Users\\USER\\OneDrive\\Desktop\\teck.txt", "w");
	//	if (pf == NULL)
	//	{
	//		perror("fopen");
	//	}
	//	fprintf(pf, "%s\n%d\n%.2f", S.name, S.age, S.width);
	//	fprintf(stdout, "%s\n%d\n%.2f", S.name, S.age, S.width);
	//	fclose(pf);
	//	pf = NULL;
	//	return 0;
	//}

// fscanf 格式化input
// int fscanf ( FILE * stream, const char * format, ... );

	//struct s
	//{
	//	char name[20];
	//	int age;
	//	float width;
	//};
	//int main()
	//{
	//	struct s S = { 0 };
	//	FILE* pf = fopen("C:\\Users\\USER\\OneDrive\\Desktop\\teck.txt", "r");
	//	if (pf == NULL)
	//	{
	//		perror("fopen");
	//		return 1;
	//	}
	//	//fprintf(pf, "%s %d %.2f", S.name, S.age, S.width);
	//	fscanf(pf, "%s %d %f", S.name, &(S.age), &(S.width));
	//	printf("%s\n%d\n%.2f", S.name, S.age, S.width);
	//	fclose(pf);
	//	pf = NULL;
	//	return 0;
	//}

// fwrite - binary output
// size_t fwrite ( const void * ptr, size_t size, size_t count, FILE * stream );

	//struct s
	//{
	//	char name[20];
	//	int age;
	//	float width;
	//};
	//int main()
	//{
	//	struct s S = { "Kong", 20, 74.5f };
	//	FILE* pf = fopen("C:\\Users\\USER\\OneDrive\\Desktop\\teck.txt", "wb");
	//	if (pf == NULL)
	//	{
	//		perror("fopen");
	//		return 1;
	//	}
	//	fwrite(&S, sizeof(struct s), 1, pf);
	//	fclose(pf);
	//	pf = NULL;
	//	return 0;
	//}

// fread - binary input
// size_t fread ( void * ptr, size_t size, size_t count, FILE * stream );

	//struct s
	//{
	//	char name[20];
	//	int age;
	//	float width;
	//};
	//int main()
	//{
	//	struct s S = { 0 };
	//	FILE* pf = fopen("C:\\Users\\USER\\OneDrive\\Desktop\\teck.txt", "rb");
	//	if (pf == NULL)
	//	{
	//		perror("fopen");
	//		return 1;
	//	}
	//	fread(&S, sizeof(struct s), 1, pf);
	//	printf("%s %d %.2f", S.name, S.age, S.width);
	//	fclose(pf);
	//	pf = NULL;
	//	return 0;
	//}

// sscanf
// int sscanf ( const char * s, const char * format, ...);
// 把字符串 转化去 格式化的数据

// sprintf
// int sprintf ( char * str, const char * format, ... );
// 把格式化的数据 转化去 字符串

	//struct s
	//{
	//	char name[20];
	//	int age;
	//	float width;
	//};
	//int main()
	//{
	//	struct s S = { "Kong", 21, 71.5f };
	//	struct s top = { 0 };
	//	char buf[100] = { 0 };
	//	sprintf(buf, "%s %d %f", S.name, S.age, S.width);
	//	printf(buf);
	//	printf("\n");
	//	sscanf(buf, "%s %d %f", top.name, &(top.age), &(top.width));
	//	printf("%s %d %f\n", top.name, top.age, top.width);
	//	return 0;
	//}

// fseek 根据文件位置 和 文件偏移量 来定义文件指针
// int fseek ( FILE * stream, long int offset, int origin );

// ftell 计算偏移量

// rewind 让 文件指针 回到 起始位置

	//int main()
	//{
	//	FILE* pf = fopen("C:\\Users\\USER\\OneDrive\\Desktop\\teck.txt", "r");
	//	if (pf == NULL)
	//	{
	//		perror("fopen");
	//		return 1;
	//	}
	//	fseek(pf, 2, SEEK_SET);
	//	int ch = fgetc(pf);
	//	printf("%c\n", ch);
	//	printf("%d\n", ftell(pf));
	//
	//	fseek(pf, -1, SEEK_END);
	//	ch = fgetc(pf);
	//	printf("\n%c\n", ch);
	//	printf("%d\n", ftell(pf));
	//
	//	rewind(pf);
	//	ch = fgetc(pf);
	//	printf("%c\n", ch);
	//	fclose(pf);
	//	pf = NULL;
	//	return 0;
	//}
