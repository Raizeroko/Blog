#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>

int add(int a, int b)
{
	int c = 0;
	c = a + b;
	return c;
}

int main()
{
	int a = 1;
	int b = 2;
	int sum;
	sum = add(a, b);
	return 0;
}