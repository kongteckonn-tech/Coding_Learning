#include<iostream>
using namespace std;

/* Standard Template Library (STL) */

// STL:
// 1.Container
// 2.Algorithm
// 3.Iter
// 4.Function object
// 5.Adaptor
// 6.Allocator 

/* Container */

// examples:
//int arr[5] = { 0, 1, 2, 3, 4 };

/* Algorithm */

// examples:
//for (int i = 0; i < 5; i++)
//	cout << arr[i] << endl;
//for (int& v : arr)
//	cout << v << endl;
//int* iter = arr;
//for (iter; iter != arr + 5; iter++)
//	cout << *iter << endl;

/* Iterator */

// i++
// iter++
// curNode = curNode->next 
// examples;

//template <typename type> class _Vector
//{
//private :
//	type* _base;
//	int _size;
//	int _capacity;
//public:
//	_Vector() : _size(-1), _capacity(0), _base(NULL) {}
//	_Vector(int capacity): _size(0), _capacity(capacity)
//	{
//		_base = new type[_capacity];
//	}
//	void Push(type input)
//	{
//		if (_size >= _capacity)
//		{
//			cout << "Out of range, please add capacity." << endl;
//			return;
//		}
//		_base[_size++] = input;
//	}
//	void Pop()
//	{
//		_size--;
//	}
//	type& operator[](int index)
//	{
//		return _base[index];
//	}
//	bool Add_Cap(int size)
//	{
//		type* tmp = _base;
//		try
//		{
//			_base = new type[_capacity + size];
//		}
//		catch (bad_alloc&)
//		{
//			return false;
//		}
//		memcpy(_base, tmp, _capacity * sizeof(type));
//		_capacity += size;
//		delete[] tmp;
//		return true;
//	}
//	int Get_Cap()
//	{
//		return _capacity;
//	}
//};
//int main()
//{
//	_Vector<int> arr(5);
//	for (int i = 0; i < arr.Get_Cap(); i++)
//	{
//		arr.Push(i + 1);
//	}
//	for (int i = 0; i < arr.Get_Cap(); i++)
//	{
//		cout << arr[i] << ' ';
//	}
//	cout << endl;
//	return 0;
//}

//template <typename type> class Vector
//{
//public:
//	using iterator = type*;
//private:
//	type* _base;
//	int _size;
//	int _capacity;
//public:
//	Vector() : _size(0), _capacity(0), _base(nullptr) {}
//	Vector(int size) : _capacity(size), _size(0)
//	{
//		_base = new type[_capacity];
//	}
//	~Vector()
//	{
//		delete[] _base;
//	}
//	void Pop()
//	{
//		if (_size > 0)
//			_size--;
//	}
//	type& operator[](int index)
//	{
//		if (index >= 0 && index < _size)
//			return _base[index];
//	}
//	void Push(type value)
//	{
//		if (_size < _capacity)
//			_base[_size++] = value;
//		else
//		{
//			if (_capacity <= 0)
//				_capacity = 1;
//			type* tmp = new type[_capacity * 2];
//			if (_base == NULL)
//			{
//				_base = tmp;
//				_capacity *= 2;
//				_base[_size++] = value;
//				return;
//			}
//			for (int i = 0; i < _size; i++)
//				tmp[i] = _base[i];
//			delete[] _base;
//			_base = tmp;
//			_capacity *= 2;
//			_base[_size++] = value;
//		}
//	}
//public:
//		class Iterator
//		{
//		private:
//			type* _ptr;
//		public:
//			Iterator() : _ptr(nullptr) {}
//			Iterator(type* ptr) : _ptr(ptr) {}
//			type& operator*()
//			{
//				return *_ptr;
//			}
//			Iterator& operator++()
//			{
//				_ptr++;
//				return *this;
//			}
//			Iterator operator++(int)
//			{
//				Iterator tmp = *this;
//				_ptr++;
//				return tmp;
//			}
//			bool operator!=(const Iterator& other) const
//			{
//				return _ptr != other._ptr;
//			}
//		};
//		Iterator begin()
//		{
//			return Iterator(_base);
//		}
//		Iterator end()
//		{
//			return Iterator(_base + _size);
//		}
//};
//template <typename iter, typename fun> void foreach (iter begin, iter end, fun f)
//{
//	for (iter it = begin; it != end; ++it)
//	{
//		f(*it);
//	}
//}
//template <typename type> void print(type value)
//{
//	cout << value << ' ';
//}
//int main()
//{
//	Vector<int> vec;
//	for(int i = 0; i < 10; i++)
//		vec.Push(i + 1);
//	foreach(vec.begin(), vec.end(), print<int>);
//	cout << endl;
//	for(Vector<int>::Iterator it = vec.begin(); it != vec.end(); ++it)
//		cout << *it << ' ';
//	return 0;
//}

/* Initial list */

//#include<initializer_list>
//template <typename type> class Vector
//{
//public:
//	using iterator = type*;
//private:
//	type* _base;
//	int _size;
//	int _capacity;
//public:
//	Vector() : _size(0), _capacity(0), _base(nullptr) {}
//	Vector(const initializer_list<type>& ls): Vector(ls.size())
//	{
//		for (const type& val : ls)
//		{
//			_base[_size++] = val;
//		}
//	}
//	Vector(int size) : _capacity(size), _size(0)
//	{
//		_base = new type[_capacity];
//	}
//	~Vector()
//	{
//		delete[] _base;
//	}
//	void Pop()
//	{
//		if (_size > 0)
//			_size--;
//	}
//	type& operator[](int index)
//	{
//		if (index >= 0 && index < _size)
//			return _base[index];
//	}
//	void Push(type value)
//	{
//		if (_size < _capacity)
//			_base[_size++] = value;
//		else
//		{
//			if (_capacity <= 0)
//				_capacity = 1;
//			type* tmp = new type[_capacity * 2];
//			if (_base == NULL)
//			{
//				_base = tmp;
//				_capacity *= 2;
//				_base[_size++] = value;
//				return;
//			}
//			for (int i = 0; i < _size; i++)
//				tmp[i] = _base[i];
//			delete[] _base;
//			_base = tmp;
//			_capacity *= 2;
//			_base[_size++] = value;
//		}
//	}
//public:
//		class Iterator
//		{
//		private:
//			type* _ptr;
//		public:
//			Iterator() : _ptr(nullptr) {}
//			Iterator(type* ptr) : _ptr(ptr) {}
//			type& operator*()
//			{
//				return *_ptr;
//			}
//			Iterator& operator++()
//			{
//				_ptr++;
//				return *this;
//			}
//			Iterator operator++(int)
//			{
//				Iterator tmp = *this;
//				_ptr++;
//				return tmp;
//			}
//			bool operator!=(const Iterator& other) const
//			{
//				return _ptr != other._ptr;
//			}
//		};
//		Iterator begin()
//		{
//			return Iterator(_base);
//		}
//		Iterator end()
//		{
//			return Iterator(_base + _size);
//		}
//};
//int main()
//{
//	initializer_list<int> arr = { 1, 2, 3, 4, 5 };
//	for(auto& v : arr)
//		cout << v << ' ';
//	cout << endl;
//	Vector<int> num = { 1, 2, 3, 4, 5 };
//	for (int& v : num)
//		cout << v << ' ';
//	return 0;
//}

