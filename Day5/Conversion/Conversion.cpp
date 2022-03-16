//// Conversion.cpp : This file contains the 'main' function. Program execution begins and ends there.
////
//
//#include <iostream>
//using namespace std;
//void foo(int* ptr)
//{
//    cout << "foo called" << endl;
//}
//class Demo
//{
//
//	int num;
//	char ch;
//	float f;
//public:
//	Demo():num(10),ch('A'),f(1.90)
//	{
//
//	}
//	
//	void operator()(int x, int y) { cout << "Operator () is overloaded" << endl; }
//	void show()
//	{
//		cout << num << " "<<ch<<" "<<f << endl;
//
//	}
//};
//int main()
//{
//    const int x = 1000;
//
//    foo(const_cast<int*>(&x));
//    foo((int*)&x);
//
//    cout << static_cast<float>(1) / 2<<endl;
//    cout << (float)1 / 2 << endl; //c type casting 
//
//    int* ptr = nullptr;
//    double* dptr = nullptr;
//    dptr = (double*)ptr;//c type casting
//    dptr = reinterpret_cast<double*>(ptr); //c++ type casting
//
//
//	Demo d1;
//	d1.show();
//	ptr = reinterpret_cast<int*>(&d1);
//	*ptr = 99;
//	ptr++;
//	(*reinterpret_cast<char*>(&d1)) = 'Z';
//
//	(* reinterpret_cast<float*>(&d1)) = 99.999f;
//	
//	d1.show();
//    //reinterpet_cast can be used convert any type of pointer to any other type
//}
//
//// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
//// Debug program: F5 or Debug > Start Debugging menu
//
//// Tips for Getting Started: 
////   1. Use the Solution Explorer window to add/manage files
////   2. Use the Team Explorer window to connect to source control
////   3. Use the Output window to see build output and other messages
////   4. Use the Error List window to view errors
////   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
////   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
