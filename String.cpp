#include<iostream>
using namespace std;

/* String */
#include<string>

//int main()
//{
//	// 1
//	string s("Kong");
//	cout << s << endl;
//	// 2 move constructor
//	string s1(std::move(s));
//	cout << s << ' ' << s1 << endl;
//	// 3
//	char ps[] = "Kong";
//	string str(ps);
//	cout << str << endl;
//	// 4
//	char name[] = "Kong Teck Onn";
//	string cut(name + 5, 5);
//	cout << cut << endl;
//	// 5 20个J and 20个A
//	string A20(20, 65);
//	string J20(20, 74);
//	cout << A20 << ' ' << J20 << endl;
//	return 0;
//}

// at, [], substr , front, back, max size, capacity

//int main()
//{
//	string name = "Kong Teck Onn";
//	cout << name << endl;
//	// at and []
//	for (int i = 0; i < name.size(); i++) 
//		cout << name.at(i); /* OR cout << name[i] */
//	cout << endl;
//	// substr substr(pos, len) 从pos位置开始，截取len个字符，如果len超过了字符串
//	cout << name.substr(5) << endl;
//	// front and back
//	cout << name.front() << ' ' << name.back() << endl;
//	// max size
//	cout << hex << name.max_size() << endl;
//	// capacity
//	cout << dec << name.capacity() << endl;
//	return 0;
//}

// reserve, resize, clear

//int main()
//{
//	string name = "Kong Teck Onn";
//	// reserve 申请 increase capacity, 但不改变size
//	name.reserve(20);
//	cout << "capacity: " << name.capacity() << " size: " << name.size() << endl;
//	// resize 改变size 但不改变capacity, 如果size增加了，新增的部分会被默认值填充
//	name.resize(20);
//	cout << "capacity: " << name.capacity() << " size: " << name.size() << endl;
//	// clear
//	name.clear();
//	cout << "capacity: " << name.capacity() << " size: " << name.size() << endl;
//	return 0;
//}

// operator +=, append, assign, insert

//int main()
//{
//	// operator +=, append
//	string question = "What is your name?";
//	cout << question << endl;
//	question += " My name is Kong Teck Onn.";
//	cout << question << endl;
//	question.append(" Student");
//	cout << question << endl;
//	question += string(" ID: 110518");
//	cout << question << endl;
//	// assign 会替换原来的内容
//	question.assign("How old are you?");
//	cout << question << endl;
//	// insert 在指定位置插入字符串
//	question.insert(15, " Sir");
//	cout << question << endl;
//	// earse 删除指定位置的字符串
//	question.erase(15, 4);
//	cout << question << endl;
//	return 0;
//}

// replace, find

//int main()
//{
//	// replace 替换指定位置的字符串
//	string name = "Kong Teck Onn";
//	name.replace(0, 4, "Mr. Kong");
//	cout << name << endl;
//	name += " love Mis. Tang Joo Wen";
//	cout << name << endl;
//	// find 查找字符串，返回第一次出现的位置，如果没有找到，返回 string::npos
//	cout << name.find("Tang") << endl;
//	cout << hex << name.find("John") << endl;
//	return 0;
//}