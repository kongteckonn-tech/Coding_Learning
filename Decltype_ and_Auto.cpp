#include<iostream>
using namespace std;

/* decltype same as auto */

// auto need initialized
// decltype no need decltype(/*exp*/)
//int main()
//{
//	auto age = 21;
//	auto name = "Kong Teck Onn";
//	decltype(2) day = 10;
//	decltype(3.142) pi = 5;
//	return 0;
//}

//int main()
//{
//	int a = 9;
//	int b = 10;
//	decltype((a)) pa = b;
//	int& r = a;
//	decltype(r) pr = a;
//	return 0;
//}

//template<typename t, typename u>
//auto add(t a, u b) -> decltype(a + b)
//{
//	return a + b;
//}
//int main()
//{
//	decltype(add(5, 3.142)) type;
//	cout << add(5, 3.142) << endl;
//	return 0;
//}