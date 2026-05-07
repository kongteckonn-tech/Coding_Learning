#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;

/* to Functor.cpp line 202 */

/* predicate adapter */

// bind1st, bind2nd, not1, not2

/* bind1st */
//#include<vector>
//#include<algorithm>
//struct _Count
//{
//private:
//	int _count = 0;
//public:
//	void operator()(int a)
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
//	auto t = for_each(v.begin(), v.end(), _Count());
//	cout << t.get_count() << endl;
//	return 0;
//}

/* bind1st bind2nd */

//#include<vector>
//#include<algorithm>
//#include<functional>
//struct _Fun : public binary_function<int, int, bool>
//{
//	bool operator()(int a, int b) const 
//	{
//		return a > b;
//	}
//};
//// bind1st 
///* 
//struct _Fun : public binary_function<int, int, bool>
//{
//	bool operator()(int a, int b) const
//	{
//		return a > b;
//	}
//};
//	| cout << count_if(v.begin(), v.end(), bind1st(_Fun(), 3));
//	v
//struct _Fun : public binary_function<int, int, bool>
//{
//private:
//	int _a = 3;
//	bool operator()(int b) const
//	{
//		return _a > b;
//	}
//};
//*/
//int main()
//{
//	vector<int> v = { 1, 2, 3, 4, 5, 6, 7, 3, 3, 3 };
//	// find the count of elements that are smaller than 3
//	cout << count_if(v.begin(), v.end(), bind1st(_Fun(), 3)) << endl;
//	// find the count of elements that are greater than 3
//	cout << count_if(v.begin(), v.end(), bind2nd(_Fun(), 3)) << endl;
//	return 0;
//}

/* bind */

//#include<vector>
//#include<algorithm>
//#include<functional>
//bool cmp(int a, int b)
//{
//	return a > b;
//}
//int main()
//{
//	vector<int> arr = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	cout << count_if(arr.begin(), arr.end(), bind(cmp, placeholders::_1, 5)) << endl;
//	return 0;
//}

/* placeholders */

//#include<vector>
//#include<algorithm>
//#include<functional>
//void show(int a, char b, double c)
//{
//	cout << a << " " << b << " " << c << endl;
//}
//int main()
//{
//	auto fun = std::bind(show, 10, 'A', 3.14); // 绑定参数
//	fun(20, 'B', 2.5);
//	fun();// 之后改变参数值无效，因为已经绑定了参数
//	// std::placeholders::_1, std::placeholders::_2, std::placeholders::_3... 可以用来占位，表示调用时传入的参数
//	// _1 表示第一个参数，_2 表示第二个参数，依此类推
//	auto fun2 = std::bind(show, placeholders::_1, placeholders::_2, 3.14);
//	fun2(40, 'C');
//	fun2(50, 'D');
//	return 0;
//}

/* std::mem_fn() 把类函数 转去 functor */

//class _Person
//{
//private:
//	int _age;
//	int _id;
//public:
//	_Person(int age, int id) : _age(age), _id(id)
//	{
//	}
//	~_Person()
//	{
//	}
//	void show() const
//	{
//		cout << "age: " << _age << "\tid: " << _id << endl;
//	}
//};
//int main()
//{
//	vector<_Person> v = { _Person(21, 1001), _Person(22, 1002), _Person(23, 1003) };
//	for (const auto& p : v)
//	{
//		p.show();
//	}
//	for_each(v.begin(), v.end(), std::mem_fn(&_Person::show));
//	return 0;
//}

/* new file String */
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

/* new file Array */
#include<array>

// array::size, array::empty

//int main()
//{
//	// array::size
//	array<int, 10> nums;
//	for (int i = 0; i < nums.size(); i++)
//		nums[i] = i + 1;
//	for (auto& v : nums)
//		cout << v << ' ';
//	cout << endl;
//	// array::empty
//	array<int, 0> empty_array;
//	cout << "Empty: " << empty_array.empty() << " nums: " << nums.empty() << endl;
//	return 0;
//}

// array::fill() 

//int main()
//{
//	// array::fill fill(value) 用指定的值填充数组
//	array<int, 10> nums;
//	nums.fill(5);
//	for (auto b = nums.begin(); b != nums.end(); b++)
//		cout << *b << ' ';
//	return 0;
//}

/* new file Vector */
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

/* new file List */
#include<list>

/* list<int>::splice 结合 
list 双向链表
forward list 单向链表
*/

//template<typename type>
//void Show(list<type>& ls)
//{
//	for (auto& v : ls)
//		cout << v << ' ';
//	cout << endl;
//}
//int main()
//{
//	list<int> nums{ 1,2,3,4,5,6,7,8,9,10 };
//	list<int> nums1 = { 9,8,7,6,5,4,3,2,1 };
//	nums.splice(nums.end(), nums1);
//	Show(nums);
//	// nums1 become empty
//	cout << nums1.empty() << endl;
//	return 0;
//}

/* list<int>::remove / remove_if, unique, sort */

//template <typename type> void Show(list<type> ls)
//{
//	for (auto& v : ls)
//		cout << v << ' ';
//	cout << endl;
//}
//int main()
//{
//	list<int> nums;
//	for (int i = 1; i <= 10; i++)
//		nums.push_front(i);
//	for (int i = 1; i <= 10; i++)
//		nums.push_back(i);
//	Show(nums);
//	// remove 
//	nums.remove(4);
//	Show(nums);
//	// remove_if
//	nums.remove_if(
//		[](auto& v) {
//			return v % 2 == 0;
//		});
//	Show(nums);
//	// unique is to remove continuesly same elements
//	nums.insert(nums.end(), 4, 9);
//	Show(nums);
//	nums.unique();
//	Show(nums);
//	// sort 
//	nums.sort();
//	nums.unique();
//	Show(nums);
//	// reverse
//	nums.reverse();
//	Show(nums);
//	return 0;
//}

/* merge */

//template <typename type> void Show(list<type> ls)
//{
//	for (auto& v : ls)
//		cout << v << ' ';
//	cout << endl;
//}
//int main()
//{
//	list<int> ls = { 1,3,9 };
//	list<int> ls1 = { 2,4,6 };
//	// merge 跟 splice 分别
//	// merge 结合后 排序 小到大
//	// splice 结合 不排序
//	ls.merge(ls1); // 注意：merge 用前要先排序小到大
//	Show(ls);
//	cout << ls.empty() << endl;
//	return 0;
//}

/* forward_list */
#include<forward_list>

/* erase_after, before_begin */

//template <typename type> void Show(forward_list<type> ls)
//{
//	for (auto it = ls.begin(); it != ls.end(); it++)
//		cout << *it << ' ';
//	cout << endl;
//}
//int main()
//{
//	forward_list<int> ls = { 1,2,3,4,5,6,7,8,9 };
//	ls.erase_after(ls.begin());
//	Show(ls);
//	ls.erase_after(ls.before_begin(), ls.end());
//	Show(ls);
//	return 0;
//}

/* new file Stack_and_Queue */

/* Stack */
#include<stack>

int main()
{
	stack<int> st;
	for (int i = 0; i < 10; i++)
		st.push(i);
	while (!st.empty())
	{
		cout << st.top() << ' ';
		st.pop();
	}
	cout << endl << st.size() << endl;
	return 0;
}

/* emplace or push */

// emplace 可以直接 move construct 
