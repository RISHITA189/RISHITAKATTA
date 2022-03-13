// lvalues_rvalues.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//int& add(int &x, int &y)
//{
//	return x;
//}
int& function(int& x)
{
	return x;
}
void foo(const int& ref)
{
	cout << "foo & ref" << endl;
}
void foo(int&& ref)
{
	cout << "foo && ref" << endl;
}



int main()
{
	int x = 10;
	int y = 20;
	/*cout << &x;
	add(10, 20) = 99;
	cout <<x;*/
	int&& ref = 10000;
	cout << ref << endl;
	int&& ref1 = 100 + 200;
	cout << ref1 << endl;
	int& ref2 = function(x);
	cout << ref2 << endl;
	int value = 10;
	foo(10);
	foo(value);
	return 0;
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
