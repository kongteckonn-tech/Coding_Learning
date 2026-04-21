#include<iostream>
using namespace std;

/* tamplate */
;
//int add(int x, int y)
//{
//	return x + y;
//}
//char add(char x, char y)
//{
//	return x + y;
//}
//double add(double x, double y)
//{
//	return x + y;
//}
// |
// v
//template<typename Type1>
//Type1 add(Type1 x, Type1 y)
//{
//	return x + y;
//}
//template<typename Type1, typename Type2>
//Type1 add(Type1 x, Type2 y)
//{
//	return x + y;
//}
//int main()
//{
//	// same feature 
//	cout << add(10, 80) << endl;
//	cout << add('A', 'a') << endl;
//	cout << add(3.142, 5.2) << endl;
//	cout << add<int>(80, 60) << endl;
//	cout << add(20, 'a') << endl;
//	return 0;
//}

//template<typename type1, class type2>
//void show(type1 in1, type2 in2)
//{
//	cout << in1 << " Template " << in2 << endl;
//}
//void show(int in1, int in2)
//{
//	cout << in1 << " Normal " << in2 << endl; 
//}
//int main()
//{
//	show(40, 50);	// use normal function 
//	show(40, 'A');	// use template function 
//	show<int>(40, 50);
//	return 0;
//}

//template<typename type>type add(type x, type y);
//int add(int, int);
//int main()
//{
//	cout << add(50, 80) << endl;
//	cout << add<int>(50, 80) << endl;
//	return 0;
//}
//int add(int a, int b)
//{
//	return a + b;
//}
//template<typename type> 
//type add(type x, type y)
//{
//	return x + y;
//}

/* class template */

//template<typename data>
//class Vector
//{
//private:
//	data* _base;
//	int _size;
//	int _capacity;
//public:
//	Vector(int capacity) : _capacity(capacity), _size(0)
//	{
//		if (_capacity == 0)
//			_capacity = 1;
//		_base = new data[capacity] {data()};
//	}
//	data& operator[](int index)
//	{
//		return _base[index];
//	}
//	int capacity()
//	{
//		return _capacity;
//	}
//	int size()
//	{
//		return _size;
//	}
//};
//int main()
//{
//	Vector<int> v(10);
//	for (int i = 0; i < v.capacity(); i++)
//	{
//		v[i] = i + 1;
//	}
//	for (int i = 0; i < v.capacity(); i++)
//	{
//		cout << v[i] << endl;
//	}
//	Vector<string> str(10); // class template need assign type 
//	str[0] = "Kong ";
//	str[1] = "Teck ";
//	str[2] = "Onn ";
//	for (int i = 0; i < v.capacity(); i++)
//	{
//		cout << str[i] << endl;
//	}
//	return 0;
//}

/* Template Specialization */

// A specialized template is based on the primary template
//template<typename type> // 必须要有 primary first
//void show(type a)
//{
//	cout << a << "\tNormal" << endl;
//}
//template<>void show<int>(int a) // 才能有 specialized 
//{
//	cout << a << "\tSpecial" << endl;
//}
//template<>void show<char>(char a)
//{
//	cout << a << "\tSpecial" << endl;
//}
//int main()
//{
//	show(40);
//	show('A');
//	show("Hello");
//	return 0;
//}

/* Full Template Specialization */

//template<typename type1, typename type2>
//struct person
//{
//	type1 name;
//	type2 age;
//	void show()
//	{
//		cout << "Primary" << endl;
//	}
//};
//template<>
//struct person<string, int> // full 
//{
//	string name;
//	int age;
//	void show()
//	{
//		cout << "Full Specialized" << endl;
//	}
//};
//int main()
//{
//	person<string, int> a;
//	a.show();
//	person<int, string> b;
//	b.show();
//	return 0;
//}

/* Partial Template Specialization */

//template<typename type1, typename type2>
//struct person
//{
//	type1 name;
//	type2 age;
//	void show()
//	{
//		cout << "Primary" << endl;
//	}
//};
//template<typename type>
//struct person<string, type> // partial
//{
//public:
//	string name;
//	type age;
//	void show()
//	{
//		cout << "Partial Specialized" << endl;
//	}
//};
//int main()
//{
//	person<string, int> a;
//	a.show();
//	person<int, string> b;
//	b.show();
//	return 0;
//}

/* Imitate array in #include<array> */

//template<typename type, size_t size>
//class _My_array
//{
//private:
//	type _array[size];
//public:
//	type& operator[](int i)
//	{
//		return _array[i];
//	}
//};
//int main()
//{
//	_My_array<int, 10> arr;
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = i + 1;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		cout << arr[i] << endl;
//	}
//	return 0;
//}

/* using == typedef zusing 更好用 */

//typedef int	INT;
//using DOUBLE = double;
//typedef void (*PFUN)();
//using Pfun = void(*)();
//template<typename type, size_t size>
//class _My_array
//{
//private:
//	type _array[size];
//public:
//	using Pointer = type;
//	type& operator[](int i)
//	{
//		return _array[i];
//	}
//};
//int main()
//{
//	_My_array<int, 10>::Pointer pint = 50;
//	cout << pint << endl;
//	return 0;
//}
