#include <iostream>
using namespace std;

const int ROWS = 4;
const int COLS = 5;

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
double avg(int Arr[], const int n);
double avg(float Arr[], const int n);
double avg(double Arr[], const int n);
double avg(char Arr[], const int n);
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
////////////////////////////////////////////////
void FillRand(int Arr[], const int n);

void FillRand(int Arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(float Arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(double Arr[ROWS][COLS], const int ROWS, const int COLS);
/////////
void Print(int Arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(float Arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(double Arr[ROWS][COLS], const int ROWS, const int COLS);
//////////
int sum(int Arr[ROWS][COLS], const int ROWS, const int COLS);
float sum(float Arr[ROWS][COLS], const int ROWS, const int COLS);
double sum(double Arr[ROWS][COLS], const int ROWS, const int COLS);
/////////
double avg(int Arr[ROWS][COLS], const int ROWS, const int COLS);
double avg(float Arr[ROWS][COLS], const int ROWS, const int COLS);
double avg(double Arr[ROWS][COLS], const int ROWS, const int COLS);
/////////
int minValueIn(int Arr[ROWS][COLS], const int ROWS, const int COLS);
int minValueIn(float Arr[ROWS][COLS], const int ROWS, const int COLS);
int minValueIn(double Arr[ROWS][COLS], const int ROWS, const int COLS);
////////
int maxValueIn(int Arr[ROWS][COLS], const int ROWS, const int COLS);
int maxValueIn(float Arr[ROWS][COLS], const int ROWS, const int COLS);
int maxValueIn(double Arr[ROWS][COLS], const int ROWS, const int COLS);
////////
void sort(int Arr[ROWS][COLS], const int ROWS, const int COLS);
void sort(float Arr[ROWS][COLS], const int ROWS, const int COLS);
void sort(double Arr[ROWS][COLS], const int ROWS, const int COLS);


#define tab "\t"
void main()
{
	setlocale(LC_ALL, "");
	const int ROWS = 4;
	const int COLS = 5;
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
void FillRand(int Arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		 Arr[i] = rand() % 100;
	}
}


void FillRand(int Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			Arr[i][j] = rand() % 100;
		}
	}
}
void FillRand(float Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			Arr[i][j] = float( rand() % 100);
		}
	}
}
void FillRand(double Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			Arr[i][j] = double( rand() % 100);
		}
	}
}
///////
void Print(int Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	//вывод массива на экран
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << Arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
}
void Print(float Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	//вывод массива на экран
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << Arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
}
void Print(double Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	//вывод массива на экран
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << Arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
}
//////
int sum(int Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += Arr[i][j];
		}
	}
	return sum;
}
float sum(float Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	float sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += Arr[i][j];
		}
	}
	return sum;
}
double sum(double Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += Arr[i][j];
		}
	}
	return sum;
}
//////
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
//////
int minValueIn(int Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int minValueIn = Arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (Arr[i][j] < minValueIn)
			{	minValueIn = Arr[i][j];	}
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
//////////
int maxValueIn(int Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int maxValueIn = Arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (Arr[i][j] > maxValueIn)
			{	maxValueIn = Arr[i][j];	}
		}
	}
	return maxValueIn;
}
int maxValueIn(float Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	float maxValueIn = Arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (Arr[i][j] > maxValueIn)
			{
				maxValueIn = Arr[i][j];
			}
		}
	}
	return maxValueIn;
}
int maxValueIn(double Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double maxValueIn = Arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (Arr[i][j] > maxValueIn)
			{
				maxValueIn = Arr[i][j];
			}
		}
	}
	return maxValueIn;
}
/////////
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
					{	y = j + 1;
						if (y == COLS) break;
					}
					if (Arr[i][j] > Arr[x][y])
					{	int buffer = Arr[x][y];
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
						if (y == COLS) y = COLS - 1;
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
						if (y == COLS) y = COLS - 1;
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