#include<iostream>
using namespace std;

int add(int a, int b);// �������� �������, (Function declaration - ��������� �������)
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
	return c; // (c) ���������� ��������� 
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
void main()
{
	setlocale(LC_ALL, "");
	int a = 2;
	int b = 3;
	int c = add(a, b); // ����� (�������������) ������� - (Function call)
	cout << a << " + " << b << " = " << c << endl;;
	cout << "8 - 3 = " << sub(8, 3) << endl;;
	cout << "5 * 3 = " << mul(5, 3) << endl;
	cout << "5 / 2 = " << div_(5, 2) << endl;
	int n;
#ifdef fact
	cout << "���������" << endl;
	//int c;// ������ �����?
	cout << "������� �����: "; cin >> n;
	cout << '\t' << n << "! = ";
	cout << Factorial(n - 1, n) << endl;
#endif // fact

	int stepen;
#ifdef step
	cout << "�������" << endl;
	cout << "������� �����: "; cin >> n;
	cout << "������ �������: "; cin >> stepen;
	c = n;
	/*
	for (int i = 0; i < stepen - 1; i++)
	{
		n *= c;
	}
	cout << n << endl;
	*/
	cout << '\t' << Power(n, stepen, c) << endl;
#endif // step
}

int add(int a, int b)// ���������� �������, (Function defenition - ����������� �������)
{
	int c = a + b;
	return c;
}

int sub(int a, int b)
{
	return a - b;
}

int mul(int a, int b)
{
	//���������
	return a * b;
}

double div_(int a, int b)
{
	//�������
	double c = (double)a / b;
	return c;
}
/*	Function doesn't take an arguments
	-too few arguments in function call
	-too many arguments in function call
*/