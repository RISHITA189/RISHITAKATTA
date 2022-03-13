#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

void swap_using_temp(int& num1, int& num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;

}

void swap_without_using_temp(int& num1, int& num2)
{
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

}
int main()
{

    int num1, num2;
    cout << "Enter the 2 numbers: " << endl;
    cin >> num1 >> num2;
    cout << "number1 and number2 before swaping: " << endl;
    cout << num1 << " " << num2 << endl;
    swap_using_temp(num1, num2);
    cout << "number1 and number2 after swap using temp: " << endl;
    cout << num1 << " " << num2 << endl;
    swap_without_using_temp(num1, num2);
    cout << "number1 and number2 after swap without using temp: " << endl;
    cout << num1 << " " << num2 << endl;


}