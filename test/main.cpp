#include"Functions.h"

void main()
{
	setlocale(LC_ALL, "");
	int Arr[ROWS][COLS];

	FillRand(Arr, ROWS, COLS);
	Print(Arr, ROWS, COLS);
	cout << "�����: " << sum(Arr, ROWS, COLS) << endl;
	cout << "������� ��������������: " << avg(Arr, ROWS, COLS) << endl;
	cout << "����������� ��������: " << minValueIn(Arr, ROWS, COLS) << endl;
	cout << "������������ ��������: " << maxValueIn(Arr, ROWS, COLS) << endl;
	
	sort(Arr, ROWS, COLS);
	cout << "�������������� ������" << endl;
	Print(Arr, ROWS, COLS);
	
	cout << "== Float ==========================" << endl;
	float Flot[ROWS][COLS];
	FillRand(Flot, ROWS, COLS);
	Print(Flot, ROWS, COLS);
	cout << "�����: " << sum(Flot, ROWS, COLS) << endl;
	cout << "������� ��������������: " << avg(Flot, ROWS, COLS) << endl;
	cout << "����������� ��������: " << minValueIn(Flot, ROWS, COLS) << endl;
	cout << "������������ ��������: " << maxValueIn(Flot, ROWS, COLS) << endl;
	sort(Flot, ROWS, COLS);
	cout << "�������������� ������" << endl;
	Print(Flot, ROWS, COLS);

	cout << "== Double =========================" << endl;
	double Doub[ROWS][COLS];
	FillRand(Doub, ROWS, COLS);
	Print(Doub, ROWS, COLS);
	cout << "�����: " << sum(Doub, ROWS, COLS) << endl;
	cout << "������� ��������������: " << avg(Doub, ROWS, COLS) << endl;
	cout << "����������� ��������: " << minValueIn(Doub, ROWS, COLS) << endl;
	cout << "������������ ��������: " << maxValueIn(Doub, ROWS, COLS) << endl;
	sort(Doub, ROWS, COLS);
	cout << "�������������� ������" << endl;
	Print(Doub, ROWS, COLS);
	
}


void ShiftRight(int Arr[], int Mas[], const int n, int m)
{
	cout << "����� ������" << endl;
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
	cout << "����� �����" << endl;
	for (int i = 0; i < m; i++) // 0 -> 5 - n - 1
	{
		Mas[i] = Arr[n - m + i];
	}

	for (int i = 0; i < n - m; i++) // 5 - n -> 5 - 1
	{
		Mas[m + i] = Arr[i];
	}
}
