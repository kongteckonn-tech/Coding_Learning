#include<iostream>
using namespace std;

/* Vector */
#include<vector>

// vector::at, vector::front, vector::back

//int main()
//{
//	vector<int> v(10, 5); // 10个元素，每个元素的值为5
//	vector<double> d(5); // 5个元素，默认值为0.0
//	vector<float> f = { 1.1, 2.2, 3.3, 4.4, 5.5 };
//	return 0;
//}

// vector::size, vector::max_size, vector::capacity, vector::empty

// vector::reserve, vector::resize, vector::clear, vector::empty

// vector::push_back, vector::emplace, vector::insert, vector erase

/* push back */

//class _Test
//{
//public:
//	_Test()
//	{
//		cout << "_Test construct" << endl; 
//	}
//	_Test(const _Test& right)
//	{
//		cout << "_Test& construct" << endl;
//	}
//	_Test(_Test&& right)
//	{
//		cout << "_Test&& construct" << endl;
//	}
//	~_Test()
//	{
//		cout << "~_Test distruct" << endl;
//	}
//};
//int main()
//{
//	{
//		vector<_Test> v;
//		v.push_back(_Test());
//	}
//	cout << endl;
//	{
//		vector<_Test> v;
//		_Test t;
//		v.push_back(t);
//	}
//	cout << endl;
//	{
//		vector<_Test> v;
//		_Test t;
//		v.push_back(std::move(t));
//	}
//	cout << endl;
//	return 0;
//}

/* emplace */

//class _Test
//{
//public:
//	_Test()
//	{
//		cout << "_Test construct" << endl; 
//	}
//	_Test(const _Test& right)
//	{
//		cout << "_Test& construct" << endl;
//	}
//	_Test(_Test&& right)
//	{
//		cout << "_Test&& construct" << endl;
//	}
//	~_Test()
//	{
//		cout << "~_Test distruct" << endl;
//	}
//	_Test& operator=(const _Test right)
//	{
//		cout << '=' << endl;
//		return *this;
//	}
//};
//int main()
//{
//	vector<_Test> v;
//	v.push_back(_Test());
//	v.emplace(v.begin(), _Test());
//	return 0;
//}

// 野指针

//int main()
//{
//	// 野指针
//	vector<int> v{ 1,2,3,4,5,6 };
//	for (auto it = v.begin(); it != v.end(); it++)
//	{
//		if (*it == 3)
//			v.erase(it);
//		cout << *it << endl;
//	}
//	return 0;
//}
