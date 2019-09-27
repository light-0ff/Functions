#include"Functions.h"

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


int minValueIn(int Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int minValueIn = Arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (Arr[i][j] < minValueIn)
			{
				minValueIn = Arr[i][j];
			}
		}
	}
	return minValueIn;
}
int minValueIn(float Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	float minValueIn = Arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (Arr[i][j] < minValueIn)
			{
				minValueIn = Arr[i][j];
			}
		}
	}
	return minValueIn;
}
int minValueIn(double Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double minValueIn = Arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (Arr[i][j] < minValueIn)
			{
				minValueIn = Arr[i][j];
			}
		}
	}
	return minValueIn;
}
