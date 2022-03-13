#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
	//int num;
	//cin >> num;

	/*if (num == 0 || num == 1)
		cout << num << " is not a prime number" << endl;
	else
	{
		for (int i = 2;i <= num / 2;i++)
		{
			if (num % i == 0)
			{
				cout << num <<" is not a prime number" << endl;
				exit(0);
			}
				
		}
		cout << num << " is a prime number" << endl;
	}*/
	int isprime=1,n,count;
	for (n = 2,count=0;n < 100;n++)
	{
		   
			for (int i = 2;i <= n / 2;i++)
			{
				if (n % i == 0)
				{
					isprime = 0;
					break;
				}
				isprime = 1;
			}
			if (isprime==1)
			{
				cout << n << endl;
				count++;
				
			}		
	}

	return 0;
}