// StaticLib1.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "add.h"
#include <stdio.h>

// TODO: This is an example of a library function

int add(int x, int y)
{
	return x + y;
}

void bar()
{
	printf("var function from static library\n");
}