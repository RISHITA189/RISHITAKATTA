#include<stdio.h>
#include <iostream>

using namespace  std;
int main()
{
    for (int i = 1;i <1000;i++)
    {
        for (int j = 1;j <1000;j++)
        {
            for (int k = 1;k <1000;k++)
            {
                if (((i * i) + (j * j)) == (k * k))
                    cout << i << " " << j << " " << k<<endl;
            }

        }
    }
    return 0;
}