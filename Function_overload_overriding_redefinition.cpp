#include<iostream>
using namespace std;

/* Function Overloading */

	//class _BASE
	//{
	//public:
	//	void Show()
	//	{
	//		cout << "_BASE::Show\n";
	//	}
	//	void Show(int i)
	//	{
	//		cout << "_BASE::Show(int i)\n";
	//	}
	//};
	//int main()
	//{
	//	_BASE a;
	//	a.Show();
	//	a.Show(5);
	//	return 0;
	//}

/* Function Redefinition */
;
	//class _BASE
	//{
	//public:
	//	void Show()
	//	{
	//		cout << "_BASE::Show\n";
	//	}
	//	void Show(int i)
	//	{
	//		cout << "_BASE::Show(int i)\n";
	//	}
	//};
	//class _DERIVED : public _BASE
	//{
	//public:
	//	void Show()
	//	{
	//		cout << "_DERIVED::Show()\n";
	//	}
	//};
	//int main()
	//{
	//	_BASE a;
	//	_DERIVED b;
	//	a.Show();
	//	b.Show();	
	//	return 0;
	//}

/* Function Overriding (only appear in virtual function) */
;
	//class _BASE
	//{
	//public:
	//	virtual void Show()
	//	{
	//		cout << "_BASE::Show()\n";
	//	}
	//	virtual void Show(int i)
	//	{
	//		cout << "_BASE::Show(int i)\n";
	//	}
	//};
	//class _DERIVED : public _BASE
	//{
	//public:
	//	virtual void Show()
	//	{
	//		cout << "_DERIVED::Show()\n";
	//	}
	//};
	//int main()
	//{
	//	_BASE a;
	//	_DERIVED b;
	//	_BASE* c = new _DERIVED; 
	//	a.Show();
	//	b.Show();
	//	c->Show();
	//	c->Show(7);
	//	return 0;
	//}

/* final and override 
final appear behind virtual function in base class (cannot be overrided)
	- avoid class be inherited
override appear behind virtual function in derived class (can be overrided)
*/
;
	//class _BASE final
	//{
	//public:
	//	virtual void Show() final
	//	{
	//		cout << "_BASE::Show()\n";
	//	}
	//	virtual void Show(int i)
	//	{
	//		cout << "_BASE::Show(int i)\n";
	//	}
	//};
	//class _DERIVED : public _BASE
	//{
	//public:
	//	virtual void Show() 
	//	{
	//		cout << "_DERIVED::Show()\n";
	//	}
	//	virtual void Show(int i) override
	//	{
	//		cout << "_DERIVED::Show(int i)\n";
	//	}
	//};
	//int main()
	//{
	//	_BASE* c = new _DERIVED; 
	//	c->Show();
	//	c->Show(7);
	//	return 0;
	//}


