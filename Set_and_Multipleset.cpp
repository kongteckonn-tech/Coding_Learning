#include<iostream>
#include<queue>
#include<set>
#include<vector>
using namespace std;

/* Set and Multiset */

/* set automatically stores elements in sorted order */

//int main()
//{
//	set<int> s;// By default, it sorts in ascending order 
//	for (int i = 0; i < 5; i++)
//		s.insert(i + 1);
//	for (auto& v : s)
//		cout << v << ' ';
//	cout << endl << s.size() << endl;
//	return 0;
//}

/* define own sorting rule */

//void Set_Sorting()
//{
//	set<int, greater<int>> s;
//	for (int i = 0; i < 5; i++)
//		s.insert(i + 1);
//	for (set<int>::iterator start = s.begin(); start != s.end(); start++)
//		cout << *start << ' ';
//	cout << endl;
//	cout << "Size: " << s.size() << endl;
//}
//void Combine()
//{
//	vector<int> vec = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	set<int, greater<int>> s(vec.begin(), vec.end());
//	for (set<int>::iterator i = s.begin(); i != s.end(); i++)
//		cout << *i << ' ';
//	cout << endl;
//	cout << "Size: " <<  s.size() << endl;
//	pair<set<int>::iterator, bool> p = s.insert(55);
//	cout << *p.first << ' ' << boolalpha << p.second << endl;
//	p = s.insert(75);
//	cout << *p.first << ' ' << boolalpha << p.second << endl;
//}
//int main()
//{
//	Set_Sorting();
//	Combine();
//	return 0;
//}

/* Pair */

//pair<int, std::string> Get()
//{
//	return { 22, "Kong Teck Onn"};
//}
//void Pair()
//{
//	auto info = Get();
//	cout << "Name: " << info.second << endl << "Age: " << info.first << endl;
//}
//void Insert()
//{
//	set<int> s;
//	s.insert({ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 });
//	for (set<int>::iterator start = s.begin(); start != s.end(); start++)
//		cout << *start << ' ';
//	cout << endl;
//	cout <<  s.erase(6) << ' ' << s.erase(40) << endl;
//}
//int main()
//{
//	//Set_Sorting();
//	//Combine();
//	//Pair();
//	Insert();
//	return 0;
//}

/* upper and lower bound */

//int main()
//{
//	set<int> s;
//	for (int i = 10; i < 101; i += 10)
//		s.insert(i);
//	for (auto& v : s)
//		cout << v << ' ';
//	cout << endl;
//	cout << "lower: " << *s.lower_bound(61) << endl;
//	cout << "upper: " << *s.upper_bound(51) << endl;
//	return 0;
//}

/* multiset */

//int main()
//{
//	multiset<int> mset;
//	mset.insert({5,4,2,9,8,1,1,3,7,0});
//	for (auto& v : mset)
//		cout << v << ' ';
//	cout << endl;
//	cout << mset.count(2) << endl;
//	cout << mset.count(1) << endl;
//	return 0;
//}