#include<iostream>

/* Operator Overloading */
// /*class_name*/ operator+/*要重载的operator*/(/* parameters */)
// + - 
;
	//class Int
	//{
	//private:
	//	int num;
	//public:
	//	Int(int x) :num(x) {}
	//	Int() :num(0) {}
	//	int data()
	//	{
	//		return num;
	//	}
	//	// 解决方法 3 operator overload
	//	Int operator-(Int& x)
	//	{
	//		return Int(this->num - x.data());
	//	}
	//};
	//// 解决方法 1 function
	//Int Int_Add(Int& x, Int& y)
	//{
	//	return Int(x.data() + y.data());
	//}
	//// 解决方法 2 operator overload
	//// operator is keyword
	//// operator overload is function 
	//Int/*class_name*/ operator+/*要重载的operator*/(Int& x, Int& y)
	//{
	//	return Int(x.data() + y.data());
	//}
	//int main()
	//{
	//	Int a(2), b(3);
	//	Int ab = Int_Add(a, b);
	//	std::cout << ab.data() << '\n'; 
	//	Int c(5), d(7);
	//	Int cd = operator+(c, d);
	//	std::cout << cd.data() << '\n';
	//	Int e(10), f(17);
	//	Int ef = e + f;
	//	std::cout << ef.data() << '\n';
	//	Int g(90), h(40);
	//	Int gh = g - h;
	//	std::cout << gh.data() << '\n';
	//	return 0;
	//}
;
	//class Int
	//{
	//private:
	//	int num;
	//public:
	//	Int(int x) :num(x) {}
	//	Int() :num(0) {}
	//	int data()
	//	{
	//		return num;
	//	}
	//	Int operator+(Int x)
	//	{
	//		return Int(this->num + x.data());
	//	}
	//};
	//Int operator+(int x, Int& y)
	//{
	//	return Int(x + y.data());
	//}
	//int main()
	//{
	//	Int a(40);
	//	std::cout << a.data() << '\n';
	//	Int b = 5 + a;
	//	std::cout << b.data() << '\n';
	//	Int c = b + 5;
	//	std::cout << c.data() << '\n';
	//	return 0;
	//}

// * / %
;
	//class NUM
	//{
	//private:
	//	double f;
	//	int num;
	//public:
	//	NUM() : f(0.0), num(0) {}
	//	NUM(int n) : num(n) {}
	//	NUM(double tf) : f(tf) {}
	//	NUM(double tf, int n) : f(tf), num(n) {}
	//	double GetF();
	//	int GetN();
	//	NUM operator*(NUM t)
	//	{
	//		return NUM(this->f * t.GetF());
	//	}
	//	NUM operator/(NUM t);
	//	NUM operator%(NUM t);
	//};
	//NUM NUM::operator/(NUM t)
	//{
	//	return NUM(this->f / t.GetF());
	//}
	//NUM NUM::operator%(NUM t)
	//{
	//	return NUM(this->num % t.GetN());
	//}
	//int NUM::GetN()
	//{
	//	return this->num;
	//}
	//double NUM::GetF()
	//{
	//	return this->f;
	//}
	//int main()
	//{
	//	NUM a(5.8, 5), b(8.2, 2);
	//	NUM ab = a * b;
	//	std::cout << ab.GetF() << '\n';
	//	ab = a / b;
	//	std::cout << ab.GetF() << '\n';
	//	ab = a % b;
	//	std::cout << ab.GetN() << '\n';
	//	return 0;
	//}

// ++ -- pre-increment and post-increment, pre-descrement and post-descrement
;
// function 
	//class Int
	//{
	//private:
	//	int num;
	//public:
	//	Int(int x) :num(x) {}
	//	Int() :num(0) {}
	//	int data() { return num; }
	//	friend Int& PreInc(Int&);
	//	friend Int PostInc(Int&);
	//};
	//Int& PreInc(Int& val)
	//{
	//	(val.num)++;
	//	return val;
	//}
	//Int PostInc(Int& val)
	//{
	//	Int tmp = val;
	//	(val.num)++;
	//	return tmp;
	//}
	//int main()
	//{
	//	Int a(50);
	//	Int b = PreInc(a);// pre-increment
	//	std::cout << b.data() << " " << a.data() << '\n';
	//	Int c = PostInc(a);// post-increment
	//	std::cout << c.data() << " " << a.data() << '\n';
	//	return 0;
	//}
;
// Overload 
	//class Int
	//{
	//private:
	//	int num;
	//public:
	//	Int(int x) :num(x) {}
	//	Int() :num(0) {}
	//	int data() { return num; }
	//	friend Int& operator++(Int&);
	//	friend Int operator++(Int&, int);
	//};
	//Int& operator++(Int& val)// pre-increment
	//{
	//	(val.num)++;
	//	return val;
	//}
	//Int operator++(Int& val, int/*加一个int占位，区分pre post*/)// post-increment
	//{
	//	Int tmp = val;
	//	val.num++;
	//	return tmp;
	//}
	//int main()
	//{
	//	Int a(50);
	//	Int b = ++a;// pre-increment
	//	std::cout << b.data() << " " << a.data() << '\n';
	//	Int c = a++;// post-increment
	//	std::cout << c.data() << " " << a.data() << '\n';
	//	return 0;
	//}
;
// Overload in class
	//class Int
	//{
	//private:
	//	int num;
	//public:
	//	Int(int x) :num(x) {}
	//	Int() :num(0) {}
	//	int data() { return num; }
	//	Int& operator++()// pre-increment
	//	{
	//		(this->num)++;
	//		return *this;
	//	}
	//	Int operator++(int)// post-increment
	//	{
	//		Int tmp = *this;
	//		this->num++;
	//		return tmp;
	//	}
	//};
	//int main()
	//{
	//	Int a(50);
	//	Int b = ++a;// pre-increment
	//	std::cout << b.data() << " " << a.data() << '\n';
	//	Int c = a++;// post-increment
	//	std::cout << c.data() << " " << a.data() << '\n';
	//	return 0;
	//}

/* Bitwise overload  | ^ & */
;
	//class Int
	//{
	//private:
	//	int num;
	//public:
	//	Int(int x) :num(x) {}
	//	Int() :num(0) {}
	//	int data() { return num; }
	//	Int operator|(Int& t)
	//	{
	//		return Int(this->num | t.data());
	//	}
	//	Int operator&(Int& t)
	//	{
	//		return Int(this->num & t.data());
	//	}
	//	Int operator^(Int& t)
	//	{
	//		return Int(this->num ^ t.data());
	//	}
	//	Int operator~()
	//	{
	//		return Int(~(this->num));		
	//	}
	//	Int operator<<(Int& t)
	//	{
	//		return Int(this->num << t.data());
	//	}
	//	Int operator<<(int t)
	//	{
	//		return Int(this->num << t);
	//	}
	//	Int operator>>(Int& t)
	//	{
	//		return Int(this->num >> t.data());
	//	}
	//};
	//int main()
	//{
	//	Int a(1);
	//	Int b = a << 2;
	//	std::cout << b.data() << '\n';
	//	return 0;
	//}

/* Logic overload || && */
;
	//class Int
	//{
	//private:
	//	int num;
	//public:
	//	Int(int x) :num(x) {}
	//	Int() :num(0) {}
	//	int data() { return num; }
	//	bool operator||(Int& x)
	//	{
	//		if (x.data() || this->data())
	//			return true;
	//		else return false;
	//	}
	//	bool operator&&(Int& x)
	//	{
	//		if (x.data() && this->data())
	//			return true;
	//		else return false;
	//	}
	//};
	//int main()
	//{
	//	Int a(0), b(1);
	//	if (a || b)
	//		std::cout << "|| TRUE\n";
	//	else
	//		std::cout << "|| FALSE\n";
	//	if (a && b)
	//		std::cout << "&& TRUE\n";
	//	else 
	//		std::cout << "&& FALSE\n";
	//	return 0;
	//}

/* Relational overload */
;
	//class Int
	//{
	//private:
	//	int num;
	//public:
	//	Int(int x) :num(x) {}
	//	Int() :num(0) {}
	//	int data() { return num; }
	//	bool operator>(Int& x)
	//	{
	//		if (this->num > x.data())
	//			return true;
	//		else return false;
	//	}
	//	bool operator<(Int& x)
	//	{
	//		if (this->num < x.data())
	//			return true;
	//		else return false;
	//	}
	//	bool operator>=(Int& x)
	//	{
	//		if (this->num >= x.data())
	//			return true;
	//		else return false;
	//	}
	//	bool operator<=(Int& x)
	//	{
	//		if (this->num <= x.data())
	//			return true;
	//		else return false;
	//	}
	//	bool operator!=(Int& x)
	//	{
	//		if (this->num != x.data())
	//			return true;
	//		else return false;
	//	}
	//	bool operator==(Int& x)
	//	{
	//		if (this->num == x.data())
	//			return true;
	//		else return false;
	//	}
	//	bool operator!()
	//	{
	//		if (!this->num)
	//			return true;
	//		else return false;
	//	}
	//};
	//int main()
	//{
	//	Int a(1), b(0);
	//	std::cout << (a > b) << '\n';
	//	std::cout << (a < b) << '\n';
	//	std::cout << (a >= b) << '\n';
	//	std::cout << (a <= b) << '\n';
	//	std::cout << (!a) << '\n';
	//	return 0;
	//}

/* Assignment overload */
;
	//class Int
	//{
	//private:
	//	int num;
	//public:
	//	Int(int x) :num(x) {}
	//	Int() :num(0) {}
	//	int data() { return num; }
	//	Int& operator=(Int& t)
	//	{
	//		this->num = t.data();
	//		return *this;
	//	}
	//	Int& operator=(int t)
	//	{
	//		this->num = t;
	//		return *this;
	//	}
	//};
	//int main()
	//{
	//	Int a(50), b(40);
	//	a = b;
	//	std::cout << a.data() << '\n';
	//	a = 8;
	//	std::cout << a.data() << '\n';
	//	Int c(80);
	//	a = b = c = 59;
	//	std::cout << a.data() << '\n';
	//	std::cout << b.data() << '\n';
	//	std::cout << c.data() << '\n';
	//	Int x = a;	// copy constructor
	//	x = a;		// assignment overload
	//	return 0;
	//}

/* () overload 
operator()(_parameters_) 必须在 class 里
*/
;
	//class Rand
	//{
	//public:
	//	int num;
	//	Rand() :num(0) {}
	//	bool operator()(int a, int b)
	//	{
	//		return a > b;
	//	}
	//};
	//void sort(int* arr, int len, /*bool (*compare)(int, int)*/ Rand compare)
	//{
	//	for (int i = 0; i < len - 1; i++)
	//	{
	//		for (int j = 0; j < len - i - 1; j++)
	//		{
	//			if (compare(arr[j], arr[j + 1]))
	//			{
	//				std::swap(arr[j], arr[j + 1]);
	//			}
	//		}
	//	}
	//}
	//bool comp(int x, int y)
	//{
	//	if (x > y)
	//		return true;
	//	else return false;
	//}
	//int main()
	//{
	//	int num[] = { 5,8,1,3,4,6,7 };
	//	Rand com;
	//	sort(num, 7, com);
	//	for (int val : num)
	//	{
	//		std::cout << val << ' ';
	//	}
	//	return 0;
	//}

/* -> overload */
;
// design a class that can manage pointer 
	//class Int
	//{
	//private:
	//	int num;
	//public:
	//	Int(int x) :num(x) {}
	//	Int() :num(0) {}
	//	int data() { return num; }
	//	void setN(int i) { this->num = i; }
	//};
	//class Auto // why need this Auto? Because we ofthen forget to free the memory
	//{
	//private:
	//	Int* ptr;
	//public:
	//	Auto(): ptr(NULL) {}
	//	Auto(Int* t) : ptr(t) {}
	//	Int* getPtr()
	//	{
	//		return this->ptr;
	//	}
	//	Int* operator->()
	//	{
	//		return this->ptr;
	//	}
	//	~Auto()
	//	{
	//		while (ptr)
	//		{
	//			delete this->ptr;
	//			this->ptr = nullptr;
	//		}
	//	}
	//};
	//int main()
	//{
	//	Int* arr = new Int(10);
	//	Auto parr(arr);
	//	std::cout << parr.getPtr()->data() << '\n';
	//	// parr.getPtr()->data() 简短它 parr->data()
	//	parr->setN(80);
	//	std::cout << parr->data() << '\n';
	//	return 0;
	//}

/* , overload */
;
	//class Int
	//{
	//private:
	//	int num;
	//public:
	//	Int(int x) :num(x) {}
	//	Int() :num(0) {}
	//	int data() { return num; }
	//	void setN(int i) { this->num = i; }
	//	Int& operator,(Int& x)
	//	{
	//		return *this;
	//	}
	//};
	//int main()
	//{
	//	Int a(8), b(4), c(2);
	//	Int t = (a, b, c);	// 'Int b': redefinition (error)
	//						// 要加 ()
	//	/* , overloading changes behavior(return left or right) */
	//	std::cout << t.data() << '\n';
	//	return 0;
	//}

/* [] overload */
;
	// vector
	//class MyVector
	//{
	//private:
	//	int* _base;
	//	int _capacity = -1;
	//	int _size = -1;
	//	int npos = -1;
	//public:
	//	MyVector() : _base(NULL) {}
	//	MyVector(int cap) : _capacity(cap)
	//	{
	//		if (_capacity == 0)
	//		{
	//			this->_capacity = 1;
	//		}
	//		_base = new int[_capacity];
	//		_size = 0;
	//	}
	//	void Push_Back(int val)
	//	{
	//		_base[_size] = val;
	//		_size++;
	//	}
	//	int& operator[](int i)
	//	{
	//		if (i >= 0 && i < _capacity)
	//			return _base[i];
	//		else return npos;
	//	}
	//};
	//int main()
	//{
	//	MyVector arr(10);
	//	for (int i = 0; i < 10; i++)
	//	{
	//		arr.Push_Back(i);
	//	}
	//	for (int i = 0; i < 11; i++)
	//	{
	//		if(arr[i] != -1)
	//			std::cout << arr[i] << '\n'; 
	//	}
	//	return 0;
	//}

/* User-defined overload */
;
	//void MSecond(unsigned int ms)
	//{
	//	std::cout << ms << "ms\n";
	//}
	//unsigned int operator"" _d(unsigned long long ms)
	//{
	//	return ms * 24 * 60 * 60 * 1000;
	//}
	//unsigned int operator"" _h(unsigned long long ms)
	//{
	//	return ms * 60 * 60 * 1000;
	//}
	//unsigned int operator"" _m(unsigned long long ms)
	//{
	//	return ms * 60 * 1000;
	//}
	//int main()
	//{
	//	size_t day = 1_d;
	//	size_t hour = 1_h;
	//	size_t min = 1_m;
	//	MSecond(day);
	//	MSecond(hour);
	//	MSecond(min);
	//	return 0;
	//}

 