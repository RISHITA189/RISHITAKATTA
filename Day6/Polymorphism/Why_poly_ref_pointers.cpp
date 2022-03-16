#include <iostream>

using namespace std;


class Base
{

public:
	Base() { cout << "ctor of Base " << endl; bar(); }

	virtual void bar()
	{
		cout << "bar base" << endl;

	}
	virtual void show() = 0;
	~Base() { cout << "distctor of Base " << endl; }

};
class Derived : public Base
{
public:
	Derived() { cout << "ctor of  derived" << endl; bar(); }
	virtual void bar() { cout << "foo derived " << endl; }
	void show()
	{
		cout << "show fun" << endl;
	}
	/*~Derived() {
		cout << "tordisc of  derived" << endl;
	}*/
};