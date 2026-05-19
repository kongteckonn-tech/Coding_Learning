#include<iostream>
using namespace std;

// remainder 
// if u use Smart pointer, then don't use again Raw pointer. (confuse)

/* Raw pointer */

//int main()
//{
//	int* p = new int(10);// need delete yourself, intialize with 10
//	cout << *p << endl;
//	return 0;
//}

/* Smart pointer (template type) RAII */

// own
//template<typename type> class _SmartPtr
//{
//private:
//	type* _ptr = NULL;
//public:
//	_SmartPtr():_ptr(NULL) {}
//	explicit _SmartPtr(type* ptr):_ptr(ptr) {}
//	~_SmartPtr()
//	{
//		if (_ptr != NULL)
//			delete[] _ptr;
//	}
//	type& operator[](int index)
//	{
//		if (_ptr != NULL)
//			return _ptr[index];
//	}
//	type& operator*()
//	{
//		if(_ptr != NULL)
//			return *_ptr;
//	}
//	type* operator->()
//	{
//		return this->_ptr;
//	}
//};

/* System smart pointer */

// shared pointer 

//void Shared()
//{
//	shared_ptr<int> nums(new int(10));
//	cout << "Nums: " << *nums << endl;
//	{
//		shared_ptr<int> tmp = nums;
//		cout << "Tmp: " << *tmp << endl;
//		cout << "1st nums " << nums.use_count() << endl;
//	}
//	cout << "2nd nums " << nums.use_count() << endl;
//	cout << "Nums: " << *nums << endl; // tmp distructoring but nums not
//	nums.reset();
//	cout << "3rd nums " << nums.use_count() << endl; // use count == 0 all pointer are free and delete 
//	if (nums == NULL)
//		cout << "Free" << endl;
//}

/* unique pointer */

//void Unique()
//{
//	unique_ptr<string> name(new string("Kong Teck Onn"));
//	cout << *name << endl;
//	cout << name->size() << endl;
//	//unique_ptr<string> tmp(name);// cannot, inside unique ptr only point one object 
//	unique_ptr<string> tmp(std::move(name)); // use move constructor can but name become empty
//	cout << *tmp << endl;
//	cout << tmp->size() << endl << "-------------" << endl;
//	cout << *name << endl;
//	cout << name->size() << endl;
//}
//int main()
//{
//	//Shared();
//	Unique();
//	return 0;
//}