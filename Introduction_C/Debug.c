/* Debug */ 

// 什么是 bug
// - 导致计算机不能正常工作就是 bug

// 什么是 调试 (debug)
// - 找 bug 的过程就是调试
// - 不要用猜

// 调试基本步骤
// 1.发现程序错误
// 2.对错误进行定位
// 3.确定错误产生的原因
// 4.提出纠正错误的解决方式
// 5.重新测试

// debug 跟 release 介绍
// debug 是调试版本,是程序员用的版本, 不做任何优化, 可以调试
// release 是发布版本, 是用户用的版本, 优化后, 不能调试

// windows 环境调试介绍
// 1.debug环境设置
// 2.了解快捷键
//	2.1 fn + f5 - 启动调试, 跳到下一个断点, 没有断点就跑到完
//	2.2 fn + f9 - 创建断点 \ 取消断点。断点是在某个位置停止执行
//	2.3 fn + f10 - 一步一步观察
//	2.4 fn + f11 - 一步一步观察, 进到函数里面去看, 所以用的比较多
//	2.5 ctrl + f5 编译不调试

// 查看调试的过程
// 1. 查看 valiables value
//	a. ctrl+f10 开始调试，debug->windows->watch
// 2. 查看内存空间
//	a. ctrl+f10 开始调试，debug->windows->memory
// 3. 查看调用
//	a. ctrl+f10 开始调试，debug->windows->call stack
// 4. 查看汇编代码
//	a. ctrl+f10 开始调试，debug->windows->disassembly
// 5. 查看寄存器
//	a. ctrl+f10 开始调试，debug->windows->registers

// 如何写出 易于调试 的代码

// const 修饰变量 / 保护变量

// 如果const 用在 普通variable 不能改变它的值，除了用指针
// 
// 如果const 用在 指针variable 时：
// 1. const put at left side *
//	mean: 指针variable 所指向的对象不能改变，但是指针可以改变
// 2. const put at right side *
//	mean: 指针variable 所指向的对象能改变，但是指针不可以改变
// 3. const put at both side *
//	mean: 指针variable 所指向的对象不能改变，但是指针不可以改变

//int main()
//{
//	// 如果const 用在 普通variable 不能改变它的值，除了用指针
//	const int num = 20;
//	//num = 10; // error
//
//	//int* pnum = &num;
//	//*pnum = 10;// can
//
//	int m = 50;
//	// 如果const 用在 指针variable 时：
//
//	// 1.
//	//const int* pnum = &num;
//	//*pnum = 50;// error
//	//pnum = &m;// can
//
//	// 2.
//	//int* const pnum = &num;
//	//*pnum = 50;// can
//	//pnum = &m;// error
//
//	// 3. 
//	//const int* const p = &num;
//	//*pnum = 50;// error
//	//pnum = &m;// error
//	return 0;
//}

// 写个 strlen 函数

//#include<assert.h>
//int my_strlen(const char* str/*str 指向的内容不能被改变*/)
//{
//	assert(str/*当里面为假时，报错误*/);
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "Kong Teck Onn";
//	int len = my_strlen(arr);
// 	return 0;
//}

// 喝汽水，你有n块，汽水1块1瓶，2瓶空瓶可以换1瓶汽水，我可以喝多少瓶

//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int total = money;
//	int empty = money;
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d\n", total);
//	return 0;
//}
