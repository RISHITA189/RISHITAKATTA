#include <iostream>

using namespace std;
//Rule 1 : ctors cannot be virtual but destructormust be virtual to call dest for derived
// if it is abstarct class writing virtual destructor is mandatory
//Rule 2 : static function cannot be virtual 
//Rule 3 : global function cannnot be virtual
//Rule 4 friend function cannot be virtual 

//Abstract Class is a class which contains atleast one pure virtual function 
//pure virtual functions cannot have body
//Rule 5 : A Class inherited from abstract class also becomes abstract by default
// If you override pure virtual function then it comes a concret

class Base
{

public:
	Base() { cout << "ctor of Base "<<endl; bar(); }

	virtual void bar()
	{
		cout << "bar base" << endl;
		
	}
	virtual void show() = 0;
	~Base() { cout << "distctor of Base " << endl;  }

};
class Derived : public Base
{
public:
	Derived() { cout << "ctor of  derived"<<endl; bar(); }
	void bar() { cout << "foo derived " << endl; }
	void show()
	{
		cout << "show fun" << endl;
	}
	/*~Derived() {
		cout << "tordisc of  derived" << endl;
	}*/
};
//
class Demo
{

}*dd;
class Warrior
{

};

class Swordsman : public Warrior
{

};
int main()
{
	/*Base* btr = new Derived();
	delete btr;*/
	/*int i;
	int* ptr = &i;
	cout << typeid(i).name() << endl;
	cout << typeid(ptr).name() << endl;
	cout << typeid(dd).name() << endl;
	cout << typeid(*ptr).name() << endl;*/

	//cout << "Leak " << _CrtDumpMemoryLeaks() << endl;

	Warrior* w;
	w = new Swordsman;
	cout << typeid(w).name() << endl;

}