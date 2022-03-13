#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int check_armstrong_num(int num)
{
	int digit,sum=0;
	while (num != 0)
	{
		digit = num % 10;
		sum += (digit * digit * digit);
		num = num / 10;
	}
	return sum;
}
int main()
{
	int a_num;
	for (int num=0;num < 1000;num++)
	{
		a_num = check_armstrong_num(num);
		if (a_num == num)
			cout << num << endl;
	}
	
	return 0;
}