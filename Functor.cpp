#include<iostream>

/* Functor new file */

// class 私有成员函数不能被当作函数指针使用
// struct 公有成员函数可以被当作函数指针使用
//struct _Value
//{
//	// overload operator() to make the struct a functor
//	void operator()() 
//	{
//		cout << "HAHA struct" << endl;
//	}
//};
//class _Show
//{
//public:
//	void operator()()
//	{
//		cout << "HAHA class" << endl;
//	}
//};
//int main()
//{
//	_Show show;
//	show();
//	_Show()();
//	_Value v;
//	_Value()();
//	v();
//	return 0;
//}

//using fun = void(*)(int); // or void(int);
//// normal function
//void print(int value)
//{
//	cout << value << endl;
//}
//// functor 
//class _Print
//{
//public:
//	void operator()(int value)
//	{
//		cout << value << endl;
//	}
//};
//template<typename fun>
//void Test_Fun(int val, fun f)
//{
//	f(val);
//}
//int main()
//{
//	Test_Fun(10, print);
//	Test_Fun(20, [](int v) {cout << v << endl; });
//	_Print p;
//	Test_Fun(30, p);
//	Test_Fun(40, _Print());
//	return 0;
//}

// functor have status, lambda have status, but normal function don't have status
// like fabonacci
//int fabonaci(int i)
//{
//	// return a value of fabonaci sequence when call the function with i
//	int a = 0, b = 1;
//	for(int j = 0; j < i; j++)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp + b;
//	}
//	// for this need calculate the value of fabonaci from start to i
//	return a;
//}
//class _Fabonacci
//{
//private:
//	int _a, _b;
//public:
//	// for this can store data of fabonaci 
//	// and return the next value when call the function
//	// so the value of fabonaci can be calculated in O(1) time
//	_Fabonacci() : _a(0), _b(1) {}
//	_Fabonacci(int index) 
//	{
//		_a = operator()(index);
//		_b = operator()(index + 1);
//	}
//	int operator()()
//	{
//		int tmp = _a;
//		_a = _b;
//		_b = tmp + _b;
//		return tmp;
//	}
//	int operator()(int i)
//	{
//		int a = 0, b = 1;
//		int tmp = a;
//		for (int j = 0; j < i; j++)
//		{
//			tmp = a;
//			a = b;
//			b = tmp + b;
//		}
//		return tmp;
//	}
//};
//int main()
//{
//	//for (size_t i = 0; i < 10; i++)
//	//{
//	//	cout << fabonaci(i) << ' ';
//	//}
//	_Fabonacci f;
//	for (int i = 0; i < 10; i++)
//		cout << f() << ' ';
//	cout << endl << f() << endl;
//	cout << f(5) << endl;
//	_Fabonacci f2(5);
//	cout << f2() << ' ';
//	cout << f2() << endl;
//	return 0;
//}

/* vector */

//#include<vector>
//template <typename fun>
//int count(
//	vector<int>::iterator begin, 
//	vector<int>::iterator  end, 
//	fun f,
//	int com
//)
//{
//	int count = 0;
//	for (vector<int>::iterator it = begin; it != end; ++it)
//	{
//		if (f(*it, com))
//			count++;
//	}
//	return count;
//}
//bool more_than(int value, int com)
//{
//	return value > com;
//}
//int main()
//{
//	vector<int> v = { 1, 2, 3, 4, 5, 6, 7, 3, 3, 3 };
//	// count the number of more than 3 in the vector
//	cout << count(v.begin(), v.end(), more_than, 3) << endl;
//	// count the number of more than 4 in the vector
//	cout << count(v.begin(), v.end(), more_than, 4) << endl;
//	return 0;
//} // confuse 

/* lamba */

// more batter
//#include<vector>
//template <typename fun>
//int count(
//	vector<int>::iterator begin,
//	vector<int>::iterator  end,
//	fun f
//)
//{
//	int count = 0;
//	for (vector<int>::iterator it = begin; it != end; ++it)
//	{
//		if (f(*it))
//			count++;
//	}
//	return count;
//}
//int main()
//{
//	vector<int> v = { 1, 2, 3, 4, 5, 6, 7, 3, 3, 3 };
//	cout << count(v.begin(), v.end(), [](int a) { return a > 3; }) << endl;
//	return 0;
//}

/* new file name predicate */

// bool operator()(int value) called one predicate
//bool more(int a)
//{
//	return a > 3;
//}
//// binary predicate
//bool more(int a, int b)
//{
//	return a > b;
//}

/* predicate adapter */

// bind1st, bind2nd, not1, not2
//#include<vector>
//#include<algorithm>
//using namespace std;
//struct _Count
//{
//private:
//	int _count = 0;
//public:
//	void operator()()
//	{
//		_count++;
//	}
//	int get_count() const
//	{
//		return _count;
//	}
//};
//int main()
//{
//	vector<int> v = { 1, 2, 3, 4, 5, 6, 7, 3, 3, 3 };
//	auto t = for_each(v.begin(), v.end(), [](int a) { cout << a << ' '; });
//	auto count = for_each(v.begin(), v.end(), _Count());
//	cout << endl << count.get_count() << endl;
//	return 0;
//}
