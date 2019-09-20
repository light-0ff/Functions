#include <iostream>
using namespace std;

void Print(int Arr[], const int n);
void Print(float Arr[], const int n);
void Print(double Arr[], const int n);
void Print(char Arr[], const int n);
////////////////////////////////////////////////////
int sum(int Arr[], const int n);
float sum(float Arr[], const int n);
double sum(double Arr[], const int n);
char sum(char Arr[], const int n);
///////////////////////////////////////////////////
int avg(int Arr[], const int n);
float avg(float Arr[], const int n);
double avg(double Arr[], const int n);
char avg(char Arr[], const int n);
///////////////////////////////////////////////////
int minValueIn(int Arr[], const int n);
float minValueIn(float Arr[], const int n);
double minValueIn(double Arr[], const int n);
char minValueIn(char Arr[], const int n);
/////////////////////////////////////////////////
int maxValueIn(int Arr[], const int n);
float maxValueIn(float Arr[], const int n);
double maxValueIn(double Arr[], const int n);
char maxValueIn(char Arr[], const int n);
/////////////////////////////////////////////////
void ShiftRight(int Arr[], int Mas[], const int n, int m);
void ShiftLeft(int Arr[], int Mas[], const int n, int m);
void FillRand(int Arr[], const int n);

#define tab "\t"
void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int Arr[n] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int Mas[n] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

	Print(Arr, n);
	cout << "Сумма элементов массива: " << sum(Arr, n) << endl;
	cout << "Среднее арифметическое массива: " << avg(Arr, n) << endl;
	cout << "Минимальное значение массива: " << minValueIn(Arr, n) << endl;
	cout << "Максимальное значение массива: " << maxValueIn(Arr, n) << endl;
	int m;
	cout << "на сколька позицый сдвигать? "; cin >> m;

	ShiftRight(Arr, Mas, n, m);
	Print(Mas, n);
	ShiftLeft(Arr, Mas, n, m);
	Print(Mas, n);
	///////////////////////////////////////////////////
	double dArray[7] = { 1.2345, 2.234, 3.57, 4.67876, 5.346, 6.1545, 7.7682 };
	float  fArray[10] = { 1.34, 2.37, 3.23, 4.8, 5.879, 6.345, 73.434, 8.82, 9.33, 10.4 };
	char   cArray[5] = { "MARS" };
	cout << "======= double ==========================================================" << endl;
	Print(dArray, 7);
	cout << "Сумма элементов массива: " << sum(dArray, 7) << endl;
	cout << "Среднее арифметическое массива: " << avg(dArray, 7) << endl;
	cout << "Минимальное значение массива: " << minValueIn(dArray, 7) << endl;
	cout << "Максимальное значение массива: " << maxValueIn(dArray, 7) << endl;
	///////
	cout << "======== float ==========================================================" << endl;
	Print(fArray, 10);
	cout << "Сумма элементов массива: " << sum(fArray, 10) << endl;
	cout << "Среднее арифметическое массива: " << avg(fArray, 10) << endl;
	cout << "Минимальное значение массива: " << minValueIn(fArray, 10) << endl;
	cout << "Максимальное значение массива: " << maxValueIn(fArray, 10) << endl;
	//////
	cout << "======= char ==========================================================" << endl;
	Print(cArray, 5);
	cout << "Сумма элементов массива: " << sum(cArray, 5) << endl;
	cout << "Среднее арифметическое массива: " << avg(cArray, 5) << endl;
	cout << "Минимальное значение массива: " << minValueIn(cArray, 5) << endl;
	cout << "Максимальное значение массива: " << maxValueIn(cArray, 5) << endl;


}
///////////////////////////////////////////////////////
void Print(int Arr[], const int n)
{
	//вывод массива на экран
	for (int i = 0; i < n; i++)
	{
		cout << Arr[i] << "\t";
	}
	cout << endl;
}
void Print(float Arr[], const int n)
{
	//вывод массива на экран
	for (int i = 0; i < n; i++)
	{
		cout << Arr[i] << "\t";
	}
	cout << endl;
}
void Print(double Arr[], const int n)
{
	//вывод массива на экран
	for (int i = 0; i < n; i++)
	{
		cout << Arr[i] << "\t";
	}
	cout << endl;
}
void Print(char Arr[], const int n)
{
	//вывод массива на экран
	for (int i = 0; i < n; i++)
	{
		cout << Arr[i] << "\t";
	}
	cout << endl;
}
//////////////////////////////////////////////////////
int sum(int Arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += Arr[i];
	}
	return sum;
}
float sum(float Arr[], const int n)
{
	float sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += Arr[i];
	}
	return sum;
}
double sum(double Arr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += Arr[i];
	}
	return sum;
}
char sum(char Arr[], const int n)
{
	char sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += Arr[i];
	}
	return sum;
}
////////////////////////////////////////////////////
int avg(int Arr[], const int n)
{
	return (double)sum(Arr, n) / n;
}
float avg(float Arr[], const int n)
{
	return (double)sum(Arr, n) / n;
}
double avg(double Arr[], const int n)
{
	return (double)sum(Arr, n) / n;
}
char avg(char Arr[], const int n)
{
	return (double)sum(Arr, n) / n;
}
//////////////////////////////////////////////////
int minValueIn(int Arr[], const int n)
{
	int minValueIn = 99;
	for (int i = 0; i < n; i++)
	{
		if (Arr[i] < Arr[i + 1], Arr[i] < minValueIn)
		{
			minValueIn = Arr[i];
		}
	}
	return minValueIn;
}
float minValueIn(float Arr[], const int n)
{
	float minValueIn = 99;
	for (int i = 0; i < n; i++)
	{
		if (Arr[i] < Arr[i + 1], Arr[i] < minValueIn)
		{
			minValueIn = Arr[i];
		}
	}
	return minValueIn;
}
double minValueIn(double Arr[], const int n)
{
	double minValueIn = 99;
	for (int i = 0; i < n; i++)
	{
		if (Arr[i] < Arr[i + 1], Arr[i] < minValueIn)
		{
			minValueIn = Arr[i];
		}
	}
	return minValueIn;
}
char minValueIn(char Arr[], const int n)
{
	char minValueIn = Arr[0];
	for (int i = 1; i < n - 1; i++)
	{
		if (Arr[i] < Arr[i + 1], Arr[i] < minValueIn)
		{
			minValueIn = Arr[i];
		}
	}
	return minValueIn;
}
//////////////////////////////////////////////
int maxValueIn(int Arr[], const int n)
{
	int maxValueIn = 0;
	for (int i = 0; i < n; i++)
	{
		if (Arr[i] > Arr[i + 1], Arr[i] > maxValueIn)
		{
			maxValueIn = Arr[i];
		}
	}
	return maxValueIn;
}
float maxValueIn(float Arr[], const int n)
{
	float maxValueIn = 0;
	for (int i = 0; i < n; i++)
	{
		if (Arr[i] > Arr[i + 1], Arr[i] > maxValueIn)
		{
			maxValueIn = Arr[i];
		}
	}
	return maxValueIn;
}
double maxValueIn(double Arr[], const int n)
{
	double maxValueIn = 0;
	for (int i = 0; i < n; i++)
	{
		if (Arr[i] > Arr[i + 1], Arr[i] > maxValueIn)
		{
			maxValueIn = Arr[i];
		}
	}
	return maxValueIn;
}
char maxValueIn(char Arr[], const int n)
{
	char maxValueIn = 0;
	for (int i = 0; i < n; i++)
	{
		if (Arr[i] > Arr[i + 1], Arr[i] > maxValueIn)
		{
			maxValueIn = Arr[i];
		}
	}
	return maxValueIn;
}
/////////////////////////////////////////////
void ShiftRight(int Arr[], int Mas[], const int n, int m)
{
	cout << "сдвиг вправо" << endl;
	for (int i = 0; i < n - m; i++)
	{
		Mas[i] = Arr[m + i];
	}
	for (int i = 0; i < m; i++)
	{
		Mas[n - m + i] = Arr[i];
	}
}
void ShiftLeft(int Arr[], int Mas[], const int n, int m)
{
	cout << "сдвиг влево" << endl;
	for (int i = 0; i < m; i++) // 0 -> 5 - n - 1
	{
		Mas[i] = Arr[n - m + i];
	}

	for (int i = 0; i < n - m; i++) // 5 - n -> 5 - 1
	{
		Mas[m + i] = Arr[i];
	}
}
/*
void FillRand(int Arr[], const int n)
{
	for (int i = n - m; i < n; i++)
	{
		 Arr[i] = rand() % 100;
	}
}
*/
