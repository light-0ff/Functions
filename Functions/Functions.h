#pragma once
#include<iostream>
using namespace std;

int add(int a, int b);// прототип функции, (Function declaration - обявление функции)
int sub(int a, int b);
int mul(int a, int b);
double div_(int a, int b);
int Factorial(int n, int c)
{
	for (int i = 1; i <= n; i++)
	{
		c = c * i;
		cout << i;
		if (i < n)	cout << " * ";
		else  cout << " * " << n + 1 << " = ";
	}
	return c; // (c) запоминает результат 
}
int Power(int n, int stepen, int c)
{
	for (int i = 0; i < stepen - 1; i++)
	{
		n *= c;
	}
	return n;
}

#define fact
#define step