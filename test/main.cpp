#include"Functions.h"

void main()
{
	setlocale(LC_ALL, "");
	int Arr[ROWS][COLS];

	FillRand(Arr, ROWS, COLS);
	Print(Arr, ROWS, COLS);
	cout << "Сумма: " << sum(Arr, ROWS, COLS) << endl;
	cout << "Среднее арифметическое: " << avg(Arr, ROWS, COLS) << endl;
	cout << "Минимальное значение: " << minValueIn(Arr, ROWS, COLS) << endl;
	cout << "Максимальное значение: " << maxValueIn(Arr, ROWS, COLS) << endl;
	
	sort(Arr, ROWS, COLS);
	cout << "Отсортированый массив" << endl;
	Print(Arr, ROWS, COLS);
	
	cout << "== Float ==========================" << endl;
	float Flot[ROWS][COLS];
	FillRand(Flot, ROWS, COLS);
	Print(Flot, ROWS, COLS);
	cout << "Сумма: " << sum(Flot, ROWS, COLS) << endl;
	cout << "Среднее арифметическое: " << avg(Flot, ROWS, COLS) << endl;
	cout << "Минимальное значение: " << minValueIn(Flot, ROWS, COLS) << endl;
	cout << "Максимальное значение: " << maxValueIn(Flot, ROWS, COLS) << endl;
	sort(Flot, ROWS, COLS);
	cout << "Отсортированый массив" << endl;
	Print(Flot, ROWS, COLS);

	cout << "== Double =========================" << endl;
	double Doub[ROWS][COLS];
	FillRand(Doub, ROWS, COLS);
	Print(Doub, ROWS, COLS);
	cout << "Сумма: " << sum(Doub, ROWS, COLS) << endl;
	cout << "Среднее арифметическое: " << avg(Doub, ROWS, COLS) << endl;
	cout << "Минимальное значение: " << minValueIn(Doub, ROWS, COLS) << endl;
	cout << "Максимальное значение: " << maxValueIn(Doub, ROWS, COLS) << endl;
	sort(Doub, ROWS, COLS);
	cout << "Отсортированый массив" << endl;
	Print(Doub, ROWS, COLS);
	
}


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
