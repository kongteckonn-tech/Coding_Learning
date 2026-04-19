#include<iostream>
#include<string>

// Base class
;
/*
private:	类外不能访问，base class 不能访问
public:		类外可以访问
protected:	类外可以访问，base class 可以访问
*/
;
	//class base
	//{
	//private:
	//	int size;
	//public:
	//	base(int size) : size(size), age(21) {}
	//	base()
	//	{
	//		this->size = 0;
	//		this->age = 0;
	//	}
	//	void Show()
	//	{
	//		std::cout << size << '\n';
	//	}
	//	void Initial(int size)
	//	{
	//		this->size = size;
	//	}
	//protected:
	//	int age;
	//};
	//class delivered : public base
	//{
	//public:
	//	delivered(int size) 
	//	{
	//		Initial(size);
	//		this->age = 21;
	//	}
	//	int GetAge()
	//	{
	//		return this->age;
	//	}
	//};
	//int main()
	//{
	//	base a(5);
	//	a.Show();
	//	delivered b(6);
	//	b.Show();
	//	std::cout << b.GetAge() << '\n';
	//	return 0;
	//}
;
	//class Father
	//{
	//private:
	//	int _mooney;
	//protected:
	//	int _age;
	//	std::string _name;
	//public:
	//	Father() : _age(-1), _name("Unknow") {}
	//	Father(int age, std::string name)
	//	{
	//		_name = name;
	//		_age = age;
	//	}
	//	void Show()
	//	{
	//		std::cout << "Name: " << _name << std::endl;
	//		std::cout << "Age: " << _age << std::endl;
	//	}
	//};
	//class Child : public/* public, private, protected */ Father
	//{
	//public:
	//	void ShowC()
	//	{
	//		std::cout << "Name: " << _name << std::endl;
	//		std::cout << "Age: " << _age << std::endl;
	//		// this->_money (cannot)
	//	}
	//};
	//int main()
	//{
	//	Father f(21, "Kong Teck Onn");
	//	f.Show();
	//	Child c;
	//	c.ShowC();
	//	return 0;
	//}

// Base and Derived Class Features

/* 
1. Derived class is special base class
2. A derived class object can be assigned to a base class object
	- f = c;
3. A base class object can be initialized from a derived class object.
	- _Father f1(c);
*/
;
	//class _Father
	//{
	//private :
	//	int _money;
	//public:
	//	_Father(int money) : _money(money) {}
	//	_Father() : _money(-1) {}
	//	int GetMoney()
	//	{
	//		return this->_money;
	//	}
	//};
	//class _Child : public _Father 
	//{
	//public:
	//	_Child() : _Father() {}
	//	_Child(int money) : _Father(money) {}
	//};
	//void Tax(_Father t)
	//{
	//	std::cout << (double)(t.GetMoney() * 0.06) << '\n';
	//}
	//int main()
	//{
	//	_Child a(10000);
	//	Tax(a);
	//	return 0;
	//}
;
	//class _Father
	//{
	//private:
	//	int _money;
	//public:
	//	_Father(int money) : _money(money) {}
	//	_Father() : _money(-1) {}
	//	int GetMoney()
	//	{
	//		return this->_money;
	//	}
	//};
	//class _Child : public _Father
	//{
	//public:
	//	_Child() : _Father() {}
	//	_Child(int money) : _Father(money) {}
	//};
	//int main()
	//{
	//	_Father f;
	//	_Child c(900);
	//	_Father f1(c);
	//	f = c;
	//	std::cout << f.GetMoney() << '\n';
	//	std::cout << f1.GetMoney() << '\n';
	//	return 0;
	//}
;
	//class _Father
	//{
	//protected:
	//	static int _age;
	//public:
	//	int GetAge()
	//	{
	//		return _age;
	//	}
	//	void NextYear()
	//	{
	//		_age++;
	//	}
	//};
	//int _Father::_age = 0;
	//class _Child : public _Father
	//{
	//public:
	//	
	//};
	//int main()
	//{
	//	_Father a; 
	//	_Child b;
	//	a.NextYear();
	//	b.NextYear();
	//	std::cout << b.GetAge() << '\n';
	//	std::cout << a.GetAge() << '\n';
	//	return 0;
	//}

// Multiple inheritance
;				
	//class _Father
	//{
	//protected:
	//	int _age;
	//public:
	//	_Father(int age) : _age(age) {}
	//};
	//class _Mother
	//{
	//protected:
	//	int _age;
	//public:
	//	_Mother(int age) : _age(age) {}
	//};
	//class _Child: public _Father, public _Mother 
	//{
	//public:
	//	int FatherAge()
	//	{
	//		return _Father::_age;
	//	}
	//	int MotherAge()
	//	{
	//		return _Father::_age;
	//	}
	//};

// Diamond inheritance
// Virtual inheritance
;
	//class _GrandFather
	//{
	//protected:
	//	int _age = 80;
	//};
	//class _Father:virtual public _GrandFather
	//{
	//protected:
	//	int _age = 50;
	//};
	//class _Mother:virtual public _GrandFather
	//{
	//protected:
	//	int _age = 48;
	//};
	//class _Child: public _Father, public _Mother 
	//{
	//public:
	//	int _age = 21;
	//	void Show()
	//	{// 加了 virtual 在 class 可以访问 base class protected
	//		std::cout << _Mother::_age << '\n';
	//		std::cout << _Father::_age << '\n';
	//		std::cout << _GrandFather::_age << '\n';
	//	}
	//};
	//int main()
	//{
	//	_Child a;
	//	a.Show();
	//	return 0;
	//}

// Polymorphism 多态 when inheritance add virtual in front
;
	//class _Parents
	//{
	//public:
	//	void see()
	//	{
	//		std::cout << "Parents\n";
	//	}
	//	virtual void show()
	//	{
	//		std::cout << "Parents\n";
	//	}
	//	virtual ~_Parents()
	//	{
	//		std::cout << "_Parents\n";
	//	}
	//};
	//class _Child: public _Parents
	//{// 函数前面加上 virtual 就是多态
	//public:
	//	void see()
	//	{
	//		std::cout << "Parents\n";
	//	}
	//	virtual void show()
	//	{
	//		std::cout << "Child\n";
	//	}
	//	virtual ~_Child()
	//	{
	//		std::cout << "_Child\n";
	//	}
	//};
	//void func(_Parents* t)
	//{
	//	t->show();
	//}
	//void func0(_Parents* t)
	//{
	//	t->see();
	//}
	//int main()
	//{// 同样的函数名字出现在各个class 里
	//	_Parents* p0 = (_Parents*)new _Child;
	//	_Parents* p = (_Parents*)new _Child;
	//	p0->see();
	//	func0((_Parents*)new _Parents);
	//	func0((_Parents*)new _Child);
	//	p->show();
	//	func((_Parents*)new _Parents);
	//	func((_Parents*)new _Child);
	//	return 0;
	//}

// using _class::_class
;
	//class _Shape
	//{
	//protected:
	//	int _height;
	//	int _weight;
	//public:
	//	_Shape(int height, int weight):_height(height), _weight(weight) {}
	//	_Shape() {}
	//};
	//class _Rect: public _Shape
	//{
	//public:
	//	using _Shape::_Shape; // use constructor function from base class 
	//	int GetHeight()
	//	{
	//		return this->_height;
	//	}
	//	int GetWeight()
	//	{
	//		return this->_weight;
	//	}
	//};
	//int main()
	//{
	//	_Rect r(5, 8);
	//	std::cout << r.GetHeight() << '\n';
	//	std::cout << r.GetWeight() << '\n';
	//	return 0;
	//}

