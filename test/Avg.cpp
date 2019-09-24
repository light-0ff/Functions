#include"Functions.h"

double avg(int Arr[], const int n)
{
	return (double)sum(Arr, n) / n;
}
double avg(float Arr[], const int n)
{
	return (double)sum(Arr, n) / n;
}
double avg(double Arr[], const int n)
{
	return (double)sum(Arr, n) / n;
}
double avg(char Arr[], const int n)
{
	return (double)sum(Arr, n) / n;
}


double avg(int Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)sum(Arr, ROWS, COLS) / (ROWS * COLS);
}
double avg(float Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)sum(Arr, ROWS, COLS) / (ROWS * COLS);
}
double avg(double Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)sum(Arr, ROWS, COLS) / (ROWS * COLS);
}