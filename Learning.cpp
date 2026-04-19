#include<iostream>
#include<string>

// First code of c++
;
	//int main()
	//{
	//	int a = 10;
	//	cout << "a = " << a << endl;
	//	system("pause");
	//	return 0;
	//}

// Constant (cannot change)
// 1. macro #define
// 2. const
;
	//#define WEEK 7
	//int main()
	//{
	//	const int week = 7;
	//	cout << "week = " << WEEK << endl;
	//	cout << "week = " << week << endl;
	//	system("pause");
	//	return 0;
	//}

// char only store one character ''
;
	//int main()
	//{
	//	// char ch = "abcd"; X
	//	// char ch = "a"; X
	//	char ch = 'a';
	//	char ch1 = 'A';
	//	cout << "ch = " << ch << endl;
	//	cout << (int)ch << endl;
	//	cout << (int)ch1 << endl;
	//	system("pause");
	//	return 0;
	//}

// STRING : string name = "..." OR char name[] = "..."
;
	//int main()
	//{
	//	char name[] = "Kong Teck Onn";
	//	string name1 = "Tay Joo Wen";
	//	string ch = "A";
	//	cout << name << endl;
	//	cout << name1 << endl;
	//	cout << ch << endl;
	//	cout << sizeof(string) << endl;
	//	return 0;
	//}

// bool: true OR false
;
	//int main()
	//{
	//	bool f = true;
	//	cout << f << endl;
	//	f = false;
	//	cout << f << endl;
	//	cout << sizeof(bool) << endl;
	//	return 0;
	//}

// input: cin >>
;
	//int main()
	//{
	//	int input = 0;
	//	cin >> input;
	//	cout << input << endl;
	//	float f = 0.0f;
	//	cin >> f;
	//	cout << f << endl;
	//	char ch = 'a';
	//	cin >> ch;
	//	cout << ch << endl;
	//	string str = "KONG";
	//	cin >> str;
	//	cout << str << endl;
	//	bool flag = false;
	//	cin >> flag;
	//	cout << flag << endl;
	//	return 0;
	//}

// Escape Operator
;
	//int main()
	//{
	//	cout << "\thahaha\n\\hehehe\thehehe\n" << endl;
	//	cout << "hehehe\n"; // == cout << "hehehe\n" << endl;
	//	system("pause");
	//	return 0;
	//}

// Arithmetic Operator +, -, *, /, %, ++, --
;
	//int main()
	//{
	//	int a = 10;
	//	a *= 3;
	//	cout << a << endl;
	//	return 0;
	//}

// Assignment Operation +=, -=, *=, /=, %=, ^=, &=, |=
;
	//int main()
	//{
	//	int a = 10;
	//	a &= 1;
	//	cout << a << endl;
	//	return 0;
	//}

// Comperation Operation ==, !=, >, >=, <, <=
;
	//int main()
	//{
	//	int a = 4 > 5;
	//	int b = 5 > 4;
	//	cout << "a = " << a << endl;
	//	cout << "b = " << b << endl;
	//	return 0;
	//}

// Logical Operation !, ||, &&
;
	//int main()
	//{
	//	cout << !1  << endl;
	//	cout << (1 || 0) << endl;
	//	cout << (1 && 0) << endl;
	//	system("pause");
	//	return 0;
	//}

// Guess number
;
	//#include<ctime>
	//void menu()
	//{
	//	cout << "~~Guess Number~~\n";
	//	cout << "**** 0. EXIT****\n";
	//	cout << "**** 1. PLAY****\n";
	//	cout << "================\n";
	//}
	//int main()
	//{
	//	srand((unsigned int)time(NULL));
	//	int r = rand() % 100 + 1;
	//	int input = 0;
	//	int num = 0;
	//	menu();
	//	do
	//	{
	//		cout << "Your selection: ";
	//		cin >> input;
	//		switch (input)
	//		{
	//		case 1:
	//			while (num != r)
	//			{
	//				cout << "Guess number" << endl;
	//				cin >> num;
	//				if (num > r)
	//				{
	//					cout << "Value too big\n";
	//				}
	//				else if (num < r)
	//				{
	//					cout << "Value too small\n";
	//				}
	//				else cout << "Congratulation!!!" << endl;
	//			}
	//			break;
	//		case 0:
	//			cout << "Exit game" << endl;
	//			break;
	//		default:
	//			cout << "Invalid input, Please try again!" << endl;
	//			break;
	//		}
	//	} while (input);
	//	system("pause");
	//	return 0;
	//}

// Name space ***
;
	//using namespace std;
	//namespace name 
	//{
	//	int age = 22;
	//	void fun()
	//	{
	//		cout << age << endl;
	//	}
	//	namespace subname
	//	{
	//		string myName = "Kong Teck Onn";
	//		void fun()
	//		{
	//			cout << myName << endl;
	//		}
	//	}
	//}
	//int main()
	//{
	//	cout << "age = " << name::age << endl;
	//	name::fun();
	//	name::subname::fun();
	//	system("pause");
	//	return 0;
	//}

// using namespace 
;
	//using namespace std;
	//namespace name 
	//{
	//	int age = 22;
	//	void fun()
	//	{
	//		cout << age << endl;
	//	}
	//	namespace subname
	//	{
	//		string myName = "Kong Teck Onn";
	//		void fun()
	//		{
	//			cout << myName << endl;
	//		}
	//	}
	//}
	//int main()
	//{
	//	using namespace name;
	//	cout << "age = " << age << endl;
	//	fun();
	//	subname::fun();
	//	system("pause");
	//	return 0;
	//}

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

// class like struct
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

	// public: 类内 类外 都可以用
	// private: 类内 不能用，类外不能用
	// protected: 类内 可以用，类外不能用
;
	//using namespace std;
	//class num
	//{
	//private:
	//	int num;
	//public:
	//	int age;
	//	void setNum(int x)
	//	{
	//		num = x;
	//	}
	//	int getNum()
	//	{
	//		return num;
	//	}
	//};
	//int main()
	//{
	//	num n;
	//	n.age = 22;// 可以访问 因为变public了
	//	//n.num = 10;// 不可访问 因为变private了
	//	// 如果要访问 
	//	n.setNum(50);
	//	cout << n.getNum() << endl;
	//	system("pause");
	//	return 0;
	//}

// Class declaration and class definition are separated

// 1.inside class just put function declaration
// 2.outside class put function implementation
//	a.put (class_name):: in front of (function_name)
//		- int person::getPersonAge()

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
	//int main()
	//{
	//	using namespace std;
	//	person a;
	//	a.setPerson("Kong Teck Onn", 22);
	//	cout << a.getPersonName() << endl << a.getPersonAge() << endl;
	//	return 0;
	//}


// typedef 

// typedef threadnode* threadtree
//				==
// using threadtree = threadnode*

// ternary operation (queastion ? true : false)

// random number 
;
	//int main()
	//{
	//	srand(time(NULL));
	//	int num = rand();
	//	std::cout << num << std::endl;
	//	system("pause");
	//	return 0;
	//}

// dynamic memory
// "new" operator ** open memory
// "delete[]" operator ** free memory
;
	//int main()
	//{
	//	int* pnum = NULL;
	//	pnum = new int[5];
	//	for(int i = 0; i < 5; i++)
	//		pnum[i] = i + 1;
	//	std::cout << "pointer: " << pnum << std::endl;
	//	for (int i = 0; i < 5; i++)
	//		std::cout << "value pnum[" << i << "]: " << pnum[i] << '\n';
	//	system("pause");
	//	return 0;
	//}
;
	//int main()
	//{
	//	int* pnum = NULL;
	//	pnum = new int[5];
	//	for(int i = 0; i < 5; i++)
	//		pnum[i] = i + 1;
	//	std::cout << "pointer: " << pnum << std::endl;
	//	for (int i = 0; i < 5; i++)
	//		std::cout << "value pnum[" << i << "]: " << pnum[i] << '\n';
	//	delete[] pnum;
	//	system("pause");
	//	return 0;
	//}

// function template ** 
;
	//template <typename t> // combile all type 
	//t max(t x, t y)
	//{
	//	return x > y ? x : y;
	//}
	//int main()
	//{
	//	std::cout << max(50, 80) << '\n';
	//	std::cout << max(9.5, 3.142) << '\n';
	//	std::cout << max(50.4, 8.7) << '\n';
	//	std::cout << max('a', 'd') << '\n';
	//	return 0;
	//}
;
	//template <typename t, typename u>// two different type
	//auto max(t x, u y) // auto select comfortable type
	//{
	//	return x > y ? x : y;
	//}
	//int main()
	//{
	//	std::cout << max(50.9, 4) << '\n';
	//	std::cout << max('a', 3.142) << '\n';
	//	std::cout << max('A', 0) << '\n';
	//	std::cout << max(45, 'd') << '\n';
	//	return 0;
	//}

// Object Oriented Programming **
;
	//class Human
	//{
	//public:
	//	std::string name = "Tay Joo Wen";
	//	int age = 23;
	//	int height = 150;
	//	int weight = 60;
	//	void eat()
	//	{
	//		std::cout << "eating \n";
	//	}
	//	void drink()
	//	{
	//		std::cout << "drinking \n";
	//	}
	//};
	//int main()
	//{
	//	Human a0;
	//	std::cout << a0.name << '\n';
	//	std::cout << a0.age << '\n';
	//	std::cout << a0.height << '\n';
	//	std::cout << a0.weight << '\n';
	//	Human a;
	//	a.name = "Kong Teck Onn";
	//	std::cout << a.name << '\n'; 
	//	a.age = 22;
	//	std::cout << a.age << '\n';
	//	a.height = 168;
	//	std::cout << a.height << '\n';
	//	a.weight = 72;
	//	std::cout << a.weight << '\n';
	//	a.eat();
	//	a.drink();
	//	return 0;
	//}

// Constructor **
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

// Overloaded Constructor 
;
	//class pizza
	//{
	//public:
	//	std::string topping1;
	//	std::string topping2;
	//	pizza(std::string topping1)
	//	{
	//		this->topping1 = topping1;
	//	}
	//	pizza(std::string topping1, std::string topping2)
	//	{
	//		this->topping1 = topping1;
	//		this->topping2 = topping2;
	//	}
	//};

// getter (readable) and setter (whritable)
;
	//class stove
	//{
	//private:
	//	int tem = 0;
	//public:
	//	int getTem() // setter
	//	{
	//		return tem;
	//	}
	//	void setTem(int tem)// getter
	//	{
	//		if (tem < 0)
	//			this->tem = 0;
	//		else if (tem >= 100)
	//			this->tem = 100;
	//		else
	//			this->tem = tem;
	//	}
	//};
	//int main()
	//{
	//	stove s;
	//	s.setTem(-90);
	//	std::cout << s.getTem() << '\n';
	//	s.setTem(80);
	//	std::cout << s.getTem() << '\n';
	//	s.setTem(780);
	//	std::cout << s.getTem() << '\n';
	//	return 0;
	//}
;
	//class Mark
	//{
	//private:
	//	int inmark = 0;
	//	int exmark = 0;
	//public:
	//	Mark()
	//	{
	//		inmark = 0;
	//		exmark = 0;
	//	}
	//	Mark(int im, int em)
	//	{
	//		this->inmark = im;
	//		this->exmark = em;
	//	}
	//	void display()
	//	{
	//		std::cout << inmark << std::endl << exmark << std::endl;
	//	}
	//	Mark operator+(Mark m)
	//	{
	//		Mark tmp;
	//		tmp.inmark = inmark + m.inmark;
	//		tmp.exmark = exmark + m.exmark;
	//		return tmp;
	//	}
	//};
	//int main()
	//{
	//	Mark m1(10, 20);
	//	m1.display();
	//	Mark m2(30, 40);
	//	m2.display();
	//	Mark m3 = m1 + m2;
	//	m3.display();
	//	return 0;
	//}

// new and malloc
;
	//class S
	//{
	//public:
	//	S()
	//	{
	//		std::cout << "haha" << '\n';
	//	}
	//	~S()
	//	{
	//		std::cout << "hoho" << '\n';
	//	}
	//};
	//int main()
	//{
	//	S* p = new S; // 会执行 class
	//	S* pa = (S*)malloc(sizeof(S));// 不会执行 class
	//	return 0;
	//}

/* explicit */

	//class A
	//{
	//private:
	//	int a;
	//public:
	//	explicit A(int a)
	//	{
	//		std::cout << "a = " << a << "\n";
	//	}
	//};
	//int main()
	//{
	//	A i(80);
	//	A i1 = 50;// 不合理 因为 A i1 = 50 -> A i1 = A(50)
	//	return 0;
	//}

/* OOM */
;
// class mode (combine)
	//class test
	//{
	//private:
	//	int m;
	//public:
	//	test(int tm) :m(tm) {};
	//	test()
	//	{
	//		m = 0;
	//	}
	//	static void show()
	//	{
	//		std::cout << "Test class" << '\n';
	//	}
	//	int getM()
	//	{
	//		return m;
	//	}
	//};
// struct mode (cannot combine) 分散
	//struct Test
	//{
	//	int m;
	//};
	//void Test_Initial(Test* t)
	//{
	//	if (!t)
	//		return;
	//	t->m = 0;
	//}
	//void Test_Set_M(Test* t, int tm)
	//{
	//	if (!t)
	//		return;
	//	t->m = tm;
	//}
	//int GetM(Test* t)
	//{
	//	return t->m;
	//}
	//void Show()
	//{
	//	std::cout << "Test struct" << '\n';
	//}

/* this */ // only class can use

	//class test
	//{
	//private:
	//	int m;
	//public:
	//	test(int tm) :m(tm) {};
	//	test(/*这个里面隐藏着 test* const this*/)
	//	{
	//		m = 0;
	//	}
	//	static void show()
	//	{
	//		std::cout << "Test class" << '\n';
	//	}
	//	int getM()
	//	{
	//		return this->m;
	//	}
	//};

/* const */

// Initial const
	//class test
	//{
	//public:
	//	const int age = 80; // 第一种
	//	test():age(90)//第二种
	//	{
	//		// age = 50;// 不能初始化
	//	}
	//};
	//int main()
	//{
	//	test t;
	//	std::cout << t.age << '\n';
	//	return 0;
	//}
;
	//class test
	//{
	//public:
	//	int age;
	//	test() :age(0) {}
	//	/* 我想要 fun1 可以修改 age, fun2 不能修改 age*/
	//	void fun1()
	//	{
	//		age = 50;
	//	}
	//	// const test* const this
	//	void fun2() const
	//	{
	//		age = 80;
	//	}// const add in behind function actually const is add in front test* const this*
	//};

/* friend */

// can direct access private in class
// not safety
	//class kong
	//{
	//private:
	//	int money;
	//public:
	//	kong() :money(10000) {}
	//	friend void joo(kong& t); //把 function joo 变朋友
	//	friend class pao;
	//	int getM()
	//	{
	//		return money;
	//	}
	//};
	//void joo(kong& t) // access kong class
	//{
	//	std::cout << t.money << '\n';
	//	t.money = 10;
	//}
	//class pao
	//{
	//public:
	//	pao() {}
	//	void getMoney(kong& t)
	//	{
	//		std::cout << t.money << '\n';
	//		t.money = 2;
	//	}
	//};
	//int main()
	//{
	//	kong m;
	//	joo(m);
	//	std::cout << m.getM() << '\n';
	//	pao n;
	//	n.getMoney(m);
	//	std::cout << m.getM() << '\n';
	//	return 0;
	//}

/* pointer to a member function of a class */

	//class dog
	//{
	//private:
	//	int age;
	//public:
	//	dog() {}
	//	void bark()
	//	{
	//		std::cout << "wuf" << '\n';
	//	}
	//};
	//void add(int x, int y)
	//{
	//	std::cout << x + y << '\n';
	//}
	//int main()
	//{
	//	dog d;
	//	dog* p = new dog;
	//	// normal function pointer 
	//	void (*padd)(int, int) = add;
	//	padd(5, 7);
	//	// class function pointer 
	//	void (/*前面要加class*/dog:: * pf)() = &dog::bark;
	//	// 用
	//	(d.*pf)();
	//	(p->*pf)();
	//	return 0;
	//}

/* vector */ 
;
	//#include<vector>
	//int main()
	//{
	//	std::vector<int> num;
	//	num.push_back(80);
	//	std::cout << num[0] << '\n';
	//	std::cout << num.size() << '\n';
	//	return 0;
	//}

/* Exception try{}catch(...){} */
;
	//int main()
	//{
	//	std::string word = "Hello";
	//	std::cout << word.at(3) << '\n'; 
	//	try
	//	{
	//		std::cout << word.at(5) << '\n'; // out of bounds and it show an error		
	//	}
	//	catch (...)
	//	{
	//		std::cout << "Exception thrown!\n"; // but if we use try{}catch(...){} can catch the problem 
	//	}
	//	try
	//	{
	//		std::cout << word.at(5);
	//	}
	//	catch (std::out_of_range& e) 
	//	{
	//		std::cout << "Exception: " << e.what() << '\n';
	//	}
	//	try
	//	{
	//		int* arr = new int[999999999999999];
	//	}
	//	catch (std::bad_alloc& e)
	//	{
	//		std::cout << "Second exception: " << e.what() << '\n';
	//	}
	//	try
	//	{
	//		throw std::runtime_error("Got Problems.\n"); // can rename the problem
	//	}
	//	catch (std::exception& e)
	//	{
	//		std::cout << e.what();
	//	}
	//	try
	//	{
	//		throw 20;
	//	}
	//	catch (int error)
	//	{
	//		std::cout << "ERROR code: " << error << '\n';
	//	}
	//	return 0;
	//}

