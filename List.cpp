#include<iostream>
using namespace std;

/* List */
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
