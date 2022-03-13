#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
	int num;
	cin >> num;
	for (int i = 1;i <=num ;i++)
	{
		for (int j = num;j > i;j--)
			cout << "  ";
		for (int k = i;k >=1;k--)
			cout << k << " ";
		for (int l = 1;l <=i;l++)
			cout << l << " ";
		cout << endl;
	}
		
	
	return 0;
}