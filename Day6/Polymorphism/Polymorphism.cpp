// Polymorphism.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
//Note : The size of the object for a class containg one or more virtual functions will increase by 4 bytes
// VTPR will hold address of VTABLE
//VTABLE is static array of function pointers , only the address of virtual address will be stored
//VTABLE will belong a class /// Base class will have seperate VTABLE //Derived class will have its own VTABLE 
//VTABLE will be loaded into memory the moment 
class Base
{
public:
    void foo()
    {
        cout << "Foo base" << endl;
    }
    void virtual foo1()
    {
        cout << "Foo base" << endl;
    }
};
class Derived : public Base
{
public:

    void foo()
    {
        cout << "Foo derived" << endl;;
    }
    void virtual foo1()
    {
        cout << "Foo derived" << endl;
    }
    //void operator=(Base&b){}
};
typedef void (*ptr)();
//int main()
//{
//    Base b1, * bptr;
//    Derived d1, * dptr;
//    cout << sizeof(b1) << sizeof(d1) << sizeof(bptr) << sizeof(dptr) << endl;
//    cout << "Address of VPTR " << &b1<<endl;
//    cout << "Address of VTABLE " << *(int *)&b1<<endl;
//    ptr p1 = (ptr) * (int*)* (int*)&b1;
//    p1();
//    cout << "Address of First Virtual function Address " << p1 << endl;
//
//  //  bptr = new Derived;
//   // bptr = &b1;
//    //bptr->foo();
//  /*  bptr = &d1;
//    bptr->foo();
//
//    bptr = &b1;
//    bptr->foo1();
//    bptr = &d1;
//    bptr->foo1();*/
//
//    b1 = d1;
//    //d1 = b1;
//    d1.foo();
//}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
