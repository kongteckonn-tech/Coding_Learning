#include<iostream>
using namespace std;

/* Lambda */

// 匿名函数
/*
[外部符号] (parameters) mutable noecept -> return type
{
	function 
};
*/

/* Use */

//int main()
//{
//	// method 1
//	cout << [](int a, int b) { return a > b;} (9, 1) << endl;
//	// method 2
//	auto fun = [](int a, int b) { return a > b;};
//	cout << fun(8, 5) << endl;
//	return 0;
//}

/* noecept and mutable and 外部符号*/

//int main()
//{
//	[]()noexcept->void 
//	{
//		cout << "Hello World" << endl;
//	}();
//	int age = 10;
//	[=]() // 外部符号 = 捕抓外面的 variable 
//		{
//			cout << "Age in " << age << endl;
//		}();
//	[=]()mutable // add mutable can assign age inside, but outside no change
//		{
//			age = 50;
//			cout << "Age in " << age << endl;
//		}();
//	cout << "Age out " << age << endl;
//	[&]()mutable // 外部符号 & can assign outside value 
//		{
//			age = 50;
//			cout << "Age " << age << endl;
//		}();
//	cout << age << endl;
//	int num = 40;
//	cout << "Num before " << num << endl;
//	[&age, num]()mutable // 前面有 & 的都会改变外面的值
//		{
//			age = 52;
//			num = 1;
//			cout << "Num in " << num << endl;
//			cout << "Age in " << age << endl;
//		}();
//	cout << "Num after " << num << endl;
//	cout << "Age after " << age << endl;
//	return 0;
//}

/* [this] 外部符号 */

//class _Person
//{
//private:
//	int _num = 90;
//public:
//	void show()
//	{
//		[this]()
//			{
//				cout << this->_num << endl;
//			}();
//	}
//};
//int main()
//{
//	_Person a;
//	a.show();
//	return 0;
//}