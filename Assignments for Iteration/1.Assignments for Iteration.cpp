#include <iostream>
#include <stdio.h>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
#include <iostream>

using namespace std;

int main()
{
	for (int i = 0;i <= 255;i++)
	{
		printf(" %c Character has the ASCII value of %d\n", i, i);
		if (i % 10 == 0)
			Sleep(1000);
	}
		
}