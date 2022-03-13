// structures.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#pragma warning(disable:4996)



typedef struct Address
{
    char city[20];
    int pincode;
}addr;

typedef struct Employee
{
    int empid;
    char name[20];
    addr myaddress;
}Employee;

int main()
{
    Employee e1;
    printf("Enter id name city and pin\n");
    scanf("%d %s %s %d", &e1.empid, &e1.name, &e1.myaddress.city, &e1.myaddress.pincode);
    printf("%d %s %s %d", e1.empid, e1.name, e1.myaddress.city, e1.myaddress.pincode);
    return 0;
}
for (int i = 0;i < no;i++)
        cout << *(arr + i) << endl;
for (int i = 0;i < 8;i++)
	*(arr1 + i) = i;
for (int i = 0;i < 8;i++)
	cout << *(arr1 + i) << endl;
int* newptr = arr; //dangling pointer // avoid shwalow copy // avoid shallow copy to dangling pointers

int* newptr1 = (int*)malloc(sizeof(int) * no); //deep copy
for (int i = 0;i < no;i++)
	*(newptr1 + 1) = *(arr + i);


free(newptr);//this will work
newptr = null;
free(arr1);
arr1 = null;
free(newptr1);
	
int row, col;
cin >> row >> col;
int **ptr = (int**)calloc(sizeof(int*), row);
for (int i = 0;i < col;i++)
	*(ptr + i) = (int*)calloc(sizeof(int), col);

for (int i = 0;i < row;i++)
	for (int j = 0;j < col;j++)
		*(*(ptr + i) + j) = i + 1;
for (int i = 0;i < row;i++)
{
	for (int j = 0;j < col;j++)
		cout << *(*(ptr + i) + j)<<" ";
	cout << endl;
}
     
char** ptr;
int row = 3;
ptr = (char**)malloc(sizeof(char*) * row);
char* mystring = (char*)malloc(20);
// newptr1 = null;
for (int i = 0; i < row; i++)
{
    cin >> mystring;
    *(ptr + i) = (char*)malloc(sizeof(char) * (strlen(mystring) + 1));
    strcpy(ptr[i], mystring);
}
for (int i = 0; i < row; i++)
{
    for (int j = i + 1; j < row; j++)

        if (strcmp(ptr[i], ptr[j]) > 0)
        {
            char* tmp = ptr[i];
            ptr[i] = ptr[j];
            ptr[j] = tmp;
        }

}
for (int i = 0; i < row; i++)
{
    cout << *(ptr + i) << endl;
}


for (int i = 0; i < row; i++)
{
    free(*(ptr + i));
    *(ptr + i) = null;
}