#include "Functions.h"

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

/*	Function doesn't take an arguments
	-too few arguments in function call
	-too many arguments in function call
*/