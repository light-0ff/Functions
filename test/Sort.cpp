#include"Functions.h"

void sort(int Arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 1 + i; j < n; j++)
		{
			if (j == n) break;
			if (Arr[i] > Arr[j])
			{
				int buffer = Arr[i];
				Arr[i] = Arr[j];
				Arr[j] = buffer;
			}
		}
	}
}
void sort(float Arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 1 + i; j < n; j++)
		{
			if (j == n) break;
			if (Arr[i] > Arr[j])
			{
				int buffer = Arr[i];
				Arr[i] = Arr[j];
				Arr[j] = buffer;
			}
		}
	}
}
void sort(double Arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 1 + i; j < n; j++)
		{
			if (j == n) break;
			if (Arr[i] > Arr[j])
			{
				int buffer = Arr[i];
				Arr[i] = Arr[j];
				Arr[j] = buffer;
			}
		}
	}
}
void sort(int Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int x = i; x < ROWS; x++)
			{
				for (int y = 0; y < COLS; y++)
				{
					if (i == x and j >= y)
					{
						y = j + 1;
						if (y == COLS) break;
					}
					if (Arr[i][j] > Arr[x][y])
					{
						int buffer = Arr[x][y];
						Arr[x][y] = Arr[i][j];
						Arr[i][j] = buffer;
					}
				}
			}
		}
	}
}
void sort(float Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int x = i; x < ROWS; x++)
			{
				for (int y = 0; y < COLS; y++)
				{
					if (i == x and j >= y)
					{
						y = j + 1;
						if (y == COLS) break;
					}
					if (Arr[i][j] > Arr[x][y])
					{
						float buffer = Arr[x][y];
						Arr[x][y] = Arr[i][j];
						Arr[i][j] = buffer;
					}
				}
			}
		}
	}
}
void sort(double Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int x = i; x < ROWS; x++)
			{
				for (int y = 0; y < COLS; y++)
				{
					if (i == x and j >= y)
					{
						y = j + 1;
						if (y == COLS) break;
					}
					if (Arr[i][j] > Arr[x][y])
					{
						double buffer = Arr[x][y];
						Arr[x][y] = Arr[i][j];
						Arr[i][j] = buffer;
					}
				}
			}
		}
	}
}
/*
void sort(int Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
			//	if (k == i) l = j + 1; else l = 0;
			//l = (k == i) ? j + 1 : 0;
				for (int l = (k == i) ? j + 1 : 0; l < COLS; l++)
				{
					if (Arr[i][j] < Arr[k][l])
					{
						int buffer = Arr[k][l];
						Arr[k][l] = Arr[i][j];
						Arr[i][j] = buffer;
					}
				}
			}
		}
	}
}
*/