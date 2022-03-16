// friends.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//class Demo
//{
//	int x;
//	static int y;
//public:
//	Demo() :x(10){}
//	void showx() { cout << x << endl; }
//	friend void function();
//	friend int main();
//};
//void function()
//{
//	Demo d1;
//	cout << d1.y;
//	d1.x = 1000;
//	cout << d1.x << endl;
//}
class ABC
{
	int x;
public:
	ABC() :x(10) {}
	void showx() { cout << "ABC" << endl; }
	friend class XYZ;
	
};
class XYZ
{
	int x;
public:
	XYZ() :x(10) {}
	//void showx() { cout << "XYZ" << endl; }
	friend void ABC::showx();
};
void showx()
{
	cout << "XYZ" << endl;
}

int main()
{
	//Demo d1;
	//cout << d1.x;
	ABC a;
	a.showx();
	XYZ x;
	showx();
	cout << "friend" << endl;
	//function();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
