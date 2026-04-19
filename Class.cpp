#include<iostream>
/* 大多数初始化 int a(90) == int a = 90 */

// class (自定义)
// can store function
// class is advanced struct
;
	//using namespace std;
	//class Student
	//{
	//	char name[50];
	//	int age;
	//	void speak()
	//	{
	//		cout << "my mame is " << name << endl;
	//		cout << "I'm " << age << "years old" << endl;
	//	}
	//};
	//int main()
	//{
	//	Student stu;
	//	system("pause");
	//	return 0;
	//}

// class == struct
;
	//namespace struct1
	//{
	//	struct person
	//	{
	//		std::string name;
	//		int age;
	//		void setPerson(std::string name, int age)
	//		{
	//			this->name = name;
	//			this->age = age;
	//		}
	//		std::string getPersonName()
	//		{
	//			return name;
	//		}
	//		int getPersonAge()
	//		{
	//			return age;
	//		}
	//	};
	//}
	//namespace class1
	//{
	//	class person
	//	{
	//	private:
	//		std::string name;
	//		int age;
	//	public:
	//		void setPerson(std::string name, int age)
	//		{
	//			this->name = name;
	//			this->age = age;
	//		}
	//		std::string getPersonName()
	//		{
	//			return name;
	//		}
	//		int getPersonAge()
	//		{
	//			return age;
	//		}
	//	};
	//}
	//int main()
	//{
	//	using namespace class1;
	//	using namespace std;
	//	person a;
	//	a.setPerson("Kong Teck Onn", 22);
	//	cout << a.getPersonName() << endl << a.getPersonAge() << endl;
	//	return 0;
	//}

// class access attribute
;
	// public: 类内 类外 都可以用
	// private: 类内 不能用，类外不能用
	// protected: 类内 可以用，类外不能用

// Class declaration and class definition are separated
;
	// 1.inside class just put function declaration
	// 2.outside class put function implementation
	//	a.put (class_name):: in front of (function_name)
	//		- int person::getPersonAge()
;
	//class person
	//{
	//private:
	//	std::string name;
	//	int age;
	//public:
	//	void setPerson(std::string name, int age);
	//	std::string getPersonName();
	//	int getPersonAge();
	//};
	//void person::setPerson(std::string name, int age)
	//{
	//	this->name = name;
	//	this->age = age;
	//}
	//std::string person::getPersonName()
	//{
	//	return name;
	//}
	//int person::getPersonAge()
	//{
	//	return age;
	//}
	//int main()
	//{
	//	using namespace std;
	//	person a;
	//	a.setPerson("Kong Teck Onn", 22);
	//	cout << a.getPersonName() << endl << a.getPersonAge() << endl;
	//	return 0;
	//}

// multi-files class
;
	//#include "person.h"
	//using namespace PERSON;
	//int main()
	//{
	//	using namespace std;
	//	person a;
	//	a.setPerson("Kong Teck Onn", 22);
	//	cout << a.getName() << endl << a.getAge() << endl;
	//	return 0;
	//}

// Constructor and Destructor

/*
	 Constructor
	 1. the name of function is the name of class
	 2. no return type 
	 3. can bring parameters
	 4. The compiler will automatically call it
	 Destructor
	 1. Automatically called when the object goes out of scope{}
	 2. the name of function is the name of class
	 3. no return type 
	 4. cannot bring parameters 
*/
/*
	Constructor Order 
	- first come first serve
	Destructor Order
	- last come first serve
*/
;
	//class stu
	//{
	//public:
	//	std::string name;
	//	int age;
	//	double gpa;
	//	stu(std::string name, int age, double gpa)
	//	{
	//		this->name = name;
	//		this->age = age;
	//		this->gpa = gpa;
	//	}
	//	void print()
	//	{
	//		std::cout << name << '\n';
	//		std::cout << age << '\n';
	//		std::cout << gpa << '\n';
	//	}
	//};
	//int main()
	//{
	//	stu a("Kong Teck Onn", 22, 3.67);
	//	stu b("Tay Joo Wen", 23, 3.67);
	//	stu c("Kong Teck Huai", 23, 1.33);
	//	a.print();
	//	b.print();
	//	c.print();
	//	return 0;
	//}
;
	// class
	//class stu
	//{
	//private:
	//	int age;
	//	char* name;
	//public:
	//	void inttial(int age, const char* name)
	//	{
	//		this->age = age;
	//		this->name = new char[strlen(name) + 1];
	//		strcpy(this->name, name);
	//	}
	//	int getAge()
	//	{
	//		return age;
	//	}
	//	const char* getName()
	//	{
	//		return name;
	//	}
	//};
	//int main()
	//{
	//	stu a;
	//	a.inttial(22, "Kong Teck Onn");
	//	std::cout << "Name: " << a.getName() << '\n';
	//	std::cout << "Age: " << a.getAge() << '\n';
	//	stu classA[20];// 初始化很麻烦 所以采用 constructor
	//	system("pause");
	//	return 0;
	//}

// |
// V 

	//class stu
	//{
	//private:
	//	int age;
	//	char* name;
	//public:
	//	// constructor
	//	stu()
	//	{
	//		age = 0;
	//		name = new char[8];// dynamic memory, need free
	//		strcpy(name, "Unknow");
	//		std::cout << "Constructor" << '\n';
	//
	//	}
	//	// Destructor
	//	~stu()
	//	{
	//		std::cout << "Destructor " << name << '\n';
	//		if (name)
	//			delete[] name;
	//	}
	//	int getAge()
	//	{
	//		return age;
	//	}
	//	char* getName()
	//	{
	//		return name;
	//	}
	//	void setName(const char* name)
	//	{
	//		if (strlen(name) > strlen(this->name))
	//			return;
	//		strcpy(this->name, name);
	//	}
	//};
	//int main()
	//{
	//	stu a;
	//	a.setName("Teck");
	//	stu b;
	//	b.setName("Joo");
	//
	//	return 0;
	//}

// The type of Constructor *important do revision*
/*
	1.default constructor
	2.parameterized constructor
	3.anonymous匿名 constructor
	3.copy constructor
	4.move constructor
*/
/* Default n Parameterized */
;
	//class stu
	//{
	//private:
	//	int age;
	//	char* name;
	//public:
	//	// Default constructor
	//	stu()
	//	{
	//		age = 0;
	//		name = new char[8];
	//		strcpy(name, "Unknow");
	//	}
	//	// Parameterized constructor **(cannot hv same parameters constructor)
	//	stu(int age, const char* name)
	//	{
	//		this->age = age;
	//		this->name = new char[strlen(name) + 1];
	//		strcpy(this->name, name);
	//	}
	//	// Destructor
	//	~stu()
	//	{
	//		if (name)
	//			delete[] name;
	//	}
	//	int getAge()
	//	{
	//		return age;
	//	}
	//	char* getName()
	//	{
	//		return name;
	//	}
	//	void setName(const char* name)
	//	{
	//		if (strlen(name) > strlen(this->name))
	//			return;
	//		strcpy(this->name, name);
	//	}
	//};
	//int main()
	//{
	//	// Defualt
	//	stu a;// 后面有隐藏的()
	//	stu b = {};
	//	// parameterized 
	//	stu c(22, "Teck");
	//	stu d = { 23, "Joo" };
	//	std::cout << a.getName() << ' ' << a.getAge() << '\n';
	//	std::cout << b.getName() << ' ' << b.getAge() << '\n';
	//	std::cout << c.getName() << ' ' << c.getAge() << '\n';
	//	std::cout << d.getName() << ' ' << d.getAge() << '\n';
	//	// anonymous 
	//	std::cout << stu(23, "Joo Teck").getName() << '\n';//用完立即释放
	//	// unless
	//	{
	//		stu e = stu(23, "Teck Joo");
	//		std::cout << e.getName() << ' ' << e.getAge() << '\n';
	//	}
	//	return 0;
	//}

/* copy constructor */
;
	//class num
	//{
	//private:
	//	int a;
	//public:
	//	int data;
	//	num(int n)
	//	{
	//		this->a = n;
	//		this->data = n;
	//	}
	//	// Copy constructor if u don't whrite, the compiler will create automatically
	//	// 如果你不希望改变他的值 前面加上 const 
	//	num(const num& other) // num 后面要加 & 因为防止重复, 没有分 private n public
	//	{
	//		a = other.a;
	//		data = other.data;
	//	}
	//	int getA()
	//	{
	//		return a;
	//	}
	//};
	//int main()
	//{
	//	// copy constructor
	//	num a(5);
	//	num b(a);
	//	std::cout << b.getA() << b.data << '\n';
	//	return 0;
	//}

/* Shallow Copy */
;
	//class stu
	//{
	//private:
	//	char* a;
	//	int b;
	//public:
	//	stu()
	//	{
	//		a = new char[8];
	//		strcpy(a, "unknow");
	//		b = 20;
	//	}
	//	~stu()
	//	{
	//		if (a)
	//		{
	//			delete[] a;
	//		}
	//	}
	//	void setA(char* n)
	//	{
	//		if (strlen(this->a) < strlen(n))
	//		{
	//			delete[] a;
	//			a = new char[strlen(n) + 1];
	//		}
	//		strcpy(this->a, n);
	//	}
	//	char* getA()
	//	{
	//		return this->a;
	//	}
	//	int getB()
	//	{
	//		return this->b;
	//	}
	//};
	//void show(stu& o)
	//{
	//	std::cout << o.getA() << ' ' << (void*)o.getA() << ' ' << o.getB() << '\n';
	//}
	//int main()
	//{
	//	stu a;
	//	stu b(a);// shallow copy 就是连地址一起拷贝进来
	//	show(a);// 当a free了 地址就还回去了
	//	show(b);// b的地址是 之前a的 a已经还回去了，不能再还多一次
	//	char arr[] = "Kong";
	//	a.setA(arr);
	//	show(a);
	//	show(b);
	//	return 0;
	//}

/* Deep Copy */
;
	//class stu
	//{
	//private:
	//	char* a;
	//	int b;
	//public:
	//	stu()
	//	{
	//		a = new char[8];
	//		strcpy(a, "unknow");
	//		b = 20;
	//	}
	//	~stu()
	//	{
	//		if (a)
	//		{
	//			delete[] a;
	//		}
	//	}
	//	stu(const stu& o) // 拷贝内容，不拷贝地址
	//	{
	//		b = o.b;
	//		a = new char[8];
	//		strcpy(a, o.a);
	//	}
	//	void setA(char* n)
	//	{
	//		if (strlen(this->a) < strlen(n))
	//		{
	//			delete[] a;
	//			a = new char[strlen(n) + 1];
	//		}
	//		strcpy(this->a, n);
	//	}
	//	char* getA()
	//	{
	//		return this->a;
	//	}
	//	int getB()
	//	{
	//		return this->b;
	//	}
	//};
	//void show(stu& o)
	//{
	//	std::cout << o.getA() << ' ' << (void*)o.getA() << ' ' << o.getB() << '\n';
	//}
	//int main()
	//{
	//	stu a;
	//	stu b(a);
	//	show(a);
	//	show(b);
	//	char arr[] = "Kong";
	//	a.setA(arr);
	//	show(a);
	//	show(b);
	//	return 0;
	//}

/* Move constructor */
;
	//class stu
	//{
	//private:
	//	char* a;
	//	int b;
	//public:
	//	stu()
	//	{
	//		a = new char[8];
	//		strcpy(a, "unknow");
	//		b = 20;
	//	}
	//	~stu()
	//	{
	//		if (a)
	//		{
	//			delete[] a;
	//		}
	//	}
	//	stu(const stu& o) // 拷贝内容，不拷贝地址
	//	{
	//		b = o.b;
	//		a = new char[8];
	//		strcpy(a, o.a);
	//	}
	//	stu(stu&& o)
	//	{
	//		b = o.b;
	//		a = o.a;// shallow copy
	//		o.a = nullptr;// let i 的 a 指向 nullptr
	//	}
	//	stu(char* a, int b)
	//	{
	//		this->b = b;
	//		this->a = new char[strlen(a) + 1];
	//		strcpy(this->a, a);
	//	}
	//	void setA(char* n)
	//	{
	//		if (strlen(this->a) < strlen(n))
	//		{
	//			delete[] a;
	//			a = new char[strlen(n) + 1];
	//		}
	//		strcpy(this->a, n);
	//	}
	//	char* getA()
	//	{
	//		return this->a;
	//	}
	//	int getB()
	//	{
	//		return this->b;
	//	}
	//};
	//void show(stu& o)
	//{
	//	std::cout << ' ' << (void*)o.getA() << ' ' << o.getB() << '\n';
	//}
	//int main()
	//{
	//	char arr[] = "Kong";
	//	stu i(arr, 72);
	//	stu j(std::move(i)); // i copy了 不能再用 i 了
	//	// 要用 i 要加上 std::move()
	//	show(i);
	//	show(j);
	//	return 0;
	//}

/* lvalue & 存可以改变的*/
;
	//int main()
	//{
	//	int a = 20;
	//	std::cout << "a = " << a << '\n';
	//	int& la = a;
	//	la = 30;
	//	std::cout << "a = " << a << '\n';
	//	return 0;
	//}

/* rvalue && 存马上就要丢的*/
;
	//int main()
	//{
	//	int a = 10;
	//	std::cout << "a = " << a << '\n';
	//	int&& ra = 80;
	//	a = ra;
	//	std::cout << "a = " << a << '\n';
	//	return 0;
	//}
;
	//class A
	//{
	//public:
	//	int ma;
	//	A()
	//	{
	//		ma = -1;
	//	}
	//	A(int a)
	//	{
	//		ma = a;
	//	}
	//};
	//class B
	//{
	//public:
	//	int mb;
	//	A oa;// 使用顺序是跟着初始化顺序
	//	A oa1;
	//	B(int b, int a):oa(b), oa1(9), mb(a)// 在class 用另一个class
	//	{
	//		//mb = a;
	//	}
	//};
	//int main()
	//{
	//	B ob(2, 3);
	//	std::cout << ob.mb << ' ' << ob.oa.ma << '\n';
	//	std::cout << ob.oa1.ma << '\n';
	//	return 0;
	//}
;
	//class A
	//{
	//public:
	//	int a;
	//	char* name;
	//	A(int a) 
	//	{
	//		this->a = a;
	//	}
	//	A(char* name):A(0)
	//	{
	//		this->name = new char[strlen(name) + 1];
	//		strcpy(this->name, name);
	//	}
	//};
	//int main()
	//{
	//	char arr[] = "Kong Teck Onn";
	//	A b(arr);
	//	std::cout << b.a << ' ' << b.name << '\n';
	//	return 0;
	//}

/* Defaulted function */
;
	//class A
	//{
	//private:
	//	int a;
	//public:
	//	A() = default;// use defaulted constructor
	//};

/* Deleted function */
;
	//class A
	//{
	//private:
	//	int a;
	//public:
	//	A() = default;// use defaulted constructor
	//	void set(int a)
	//	{
	//		this->a = a;
	//	}
	//	void set(int) = delete;
	//};
	//int main()
	//{
	//	A s;
	//	s.set(50);
	//	return 0;
	//}

/* static in class */
;
	//class A
	//{
	//private:
	//	static int a;
	//public:
	//	A(){}
	//	static int b;
	//	void app()
	//	{
	//		a++;
	//	}
	//	int geta()
	//	{
	//		return a;
	//	}
	//};
	//int A::a = 0; // static initialize
	//int A::b = 0;
	//int main()
	//{
	//	A input;
	//	for (int i = 0; i < 5; i++)
	//	{
	//		input.app();
	//		std::cout << input.geta() << '\n';
	//		(input.b)++;
	//		std::cout << input.b << '\n';
	//	}
	//	return 0;
	//}

