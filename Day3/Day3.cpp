#include <iostream>
#include "complex.h"

using namespace std;

int count = 0;
int main()
{
	//const Complex c1(10,20);
	Complex* c1 = new Complex[3];
	for(int i=0;i<3;i++)
		c1[i].accpept();
	for (int i = 0;i < 3;i++)
		c1[i].display();

	delete[] c1;
	c1 = nullptr;
	cout << "Leak " << _CrtDumpMemoryLeaks();
}
extern int count;