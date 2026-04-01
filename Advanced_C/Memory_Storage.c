/* Menory Storage */

// 类型

	//				Byte
	// char			1
	// short		2
	// int			4
	// long			4/8	
	// long long	8
	// float		4
	// double		8

// 整型家族 integer

	// char 
	//	- unsigned char
	//	- signed char 不一定等于 char (取决编译器)
	//	- char
	// short
	//	- unsigned short
	//	- signed short == short
	// int 
	//	- unsigned int
	//	- signed int == int
	// long
	//	- unsigned long
	//	- signed long == long
	// long long
	//	- unsigned long long
	//	- signed long long == long long

// 浮点型家族 floating-point type

	// float
	// double

// 自定义类型 User-defined type

	// 数组 array
	// 结构体 struct
	// 枚举 enum
	// 联合 union

// 指针类型 pointer type

	// char* p
	// short* p
	// int* p
	// long* p
	// long long* p
	// float* p
	// double* p
	// void* p

// 空类型 void type

// void

// integer 在内存中的存储

	// 数值表示形式
	// binary 2进制			0b
	// octal 8进制			0
	// hexadecimal 16进制	0x

	// integer 的 2进制 表示形式
	// 原码 original code
	// 反码 one's complement
	// 补码 two's complement
	//	1.positive value
	//	- 原码 = 反码 = 补码
	//	2.negative value
	//	- 反码 = 原码(1->0,0->1), 补码 = 反码 + 1 
	//	- 反码 = 补码(1->0,0->1), 原码 = 反码 + 1 
	//	- 符号位不变
	
	// 为了方便储存 binary -> hexadecimal
	// binary -> hexadecimal, 4位 -> 1位
	// 20的补码：
	// 0b00000000000000000000000000010100
	// 0x   0   0   0   0   0   0   1   4 (hex)
	// -10的补码:
	// 0b10000000000000000000000000001010 - 原码
	// 0x   8   0   0   0   0   0   0   a (hex)
	// 0b11111111111111111111111111110101 - 反码
	// 0x   f   f   f   f   f   f   f   5 (hex)
	// 0b11111111111111111111111111110110 - 补码
	// 0x   f   f   f   f   f   f   f   6 (hex)
	// 内存 存储的是补码
	// 为什么存的是补码 因为 CPU 只能加法，不能减
	// 当要 算 1-1 时，可以写成 1+(-1)
	// 用原码相加就错了
	// 只能用补码算就没有问题

// 大小端

	// 大端序存储 bid-endian
	//	- 正着放
	//	- 第1 byte -> 第4 byte
	//	- 从低地址->高地址
	// 小端序存储 little-endian
	//  - 反着放
	//	- 第4 byte -> 第1 byte
	//	- 从低地址->高地址

// 写代码判断大小端

	//int main()
	//{
	//	int a = 1;
	//	char* pa = &a;
	//	if (*pa)
	//		printf("little-endian\n");
	//	else
	//		printf("big-endian\n");
	//	return 0;
	//}

	//int main()
	//{
	//	unsigned char a = -1; // unsigned 
	//	// int
	//	// 10000000000000000000000000000001 原码
	//	// 11111111111111111111111111111110 反码
	//	// 11111111111111111111111111111111 补码
	//	// char 存的是后面 8bit, 1byte
	//	// 11111111
	//	// 整形提升 看符号位 但是 unsigned 是没有无符号位所以补0
	//	// 00000000000000000000000011111111 原码 = 反码 = 补码
	//	char b = -1;
	//	// int
	//	// 10000000000000000000000000000001 原码
	//	// 11111111111111111111111111111110 反码
	//	// 11111111111111111111111111111111 补码
	//	// char 存的是后面 8bit, 1byte
	//	// 11111111 
	//	// 整形提升 看符号位如果 是0补0，是1补1
	//	// 11111111111111111111111111111111 补码
	//	// 10000000000000000000000000000000 反码
	//	// 10000000000000000000000000000001 原码
	//	printf("a = %d\nb = %d\n", a, b);
	//	return 0;
	//}

// %u 打印 unsigned

	//int main()
	//{
	//	char a = -128;
	//	// int 
	//	// 10000000000000000000000010000000
	//	// 11111111111111111111111101111111
	//	// 11111111111111111111111110000000
	//	// char 
	//	// 10000000
	//	// 11111111111111111111111110000000
	//	printf("%u\n", a);
	//	return 0;
	//}

	//int main()
	//{
	//	int i = -20;
	//	// 10000000000000000000000000010100
	//	// 11111111111111111111111111101011
	//	// 11111111111111111111111111101100
	//	unsigned int j = 10;
	//	// 00000000000000000000000000001010
	//	printf("%d\n", i + j);
	//	// 11111111111111111111111111110110
	//	// 10000000000000000000000000001001
	//	// 10000000000000000000000000001010
	//	return 0;
	//}

	// strlen() 是算string的字数，直到('\0')/ (0)
	// 所以中途遇到 ('\0')/ (0) 就会停下计算

	// 相同的 type 相加/相减，得到的会是同样的type

// floating point type 在内存中的存储

	// 存放 float and int 的方式不同
	//int main()
	//{
	//	int n = 9;
	//	float* pf = (float*)&n;
	//	printf("n = %d\n", n);
	//	printf("pf = %f\n", *pf);
	//	*pf = 9.0;
	//	printf("n1 = %d\n", n);
	//	printf("pf1 = %f\n", *pf);
	//	return 0;
	//}

	// 科学的形式 
	// 1.24E3 (10进制) -> 1240.00000

	// 二进制的浮点数 V
	// V = ((-1)^S) * M * (2^E)
	// 这边的 ^ 是表示 power
	// (-1)^S 表示符号位，S=0 表示正数，S=-1 表示负数
	// M 表示有效数字 >= (=1), < (=0)
	// E 表示浮动次数

	//int main()
	//{
	//	float i = 5.0;
	//	// 二进制：101.0 = 1.01*2^2
	//	// 5.0 = ((-1)^0) * 1.01 * (2^2)
	//	// S = 0 (positive) M = 1.01 E = 2 (浮动次数)
	//
	//	float j = 9.5f;
	//	// 二进制：1001.1 = 1.0011*2^3
	//	// 9.5 = ((-1)^0) * 1.0011 * (2^3)
	//	// S = 0 (positive) M = 1.0011 E = 3 (浮动次数)
	//	return 0;
	//}

// 存的时候

	// floating point type 存的时候只需要存 S, E, M
	// float -> S - 1bit, E - 8bits, M - 23bits
	// double -> S - 1bit, E - 8bits, M - 55bits
	// see IEEE 754 image

	// M 在存的时候 把前面的1 去掉，拿出来用的时候再把1 加回去
	// example M = 1.01, 存 01 only

	// E 在存的时候是用 unsigned int 的方式存放
	// 但是 E 可以出现 负数

	// 所以E在存的时候存： 真实值E + 中间值
	// float -> 存 E + 127
	// double -> 存 E + 1023
	// 是E在存的时候，而不是负数E在存的时候，所以正数的时候还是要加 中间值

// 取的时候

	// E取的时候 - 3 种情况

	// E 不全1不全0的情况
	// E 的8 bits 取出来 -127(float), -1023(double) 就ok
	// M 前面加上 1.

	// E 全0的情况 (无穷小)
	// E 直接 = 1-127 = -126 (float)
	// E 直接 = 1-1023 = -1022 (double)
	// M 前面加上 0.

	// E 全1的情况 (无穷大)
	// M 直接 0
	// S 去表示 +—无限大

