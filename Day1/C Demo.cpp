#include<stdio.h>
#include <stdlib.h>
#include <crtdbg.h>
#include "header.h"
#include "../StaticLib1/add.h"
#pragma warning(disable:4996)
#pragma pack (1)

int value = 1000;

const int variable = 100000;

struct employee
{
    int empid;
    char name;
    float sal;
}e1;

int main()
{
    struct employee e1;
    //rint ")
    printf("%d\n", sizeof(e1));
    
    printf("in main %d %d %f %d\n", value, myvalue, PI, variable);
    function();
    printf("in main %d %d\n", value, myvalue);
    foo1();
    bar();
    printf("\ncalling add in main %d\n",add(10, 20));


    int no;
    printf("enter the number of elements:");
    scanf("%d", &no);
    int* arr =(int*) malloc(sizeof(int) * no);
    if (arr == NULL)
    {
        printf("out of memory");
        exit(0);
    }
    printf("enter the elements:");
    for (int i = 0; i < no; ++i)
    {
        scanf("%d", arr + i);
    }
    printf("entered elements are:");
    for (int i = 0; i < no; ++i)
    {
        printf("%d\t", *(arr + i));
    }
    free(arr);
    printf("\nLeaks=%d\n", _CrtDumpMemoryLeaks());
    return 0;
}

static void foo1()
{
    printf("foo called\n");
}