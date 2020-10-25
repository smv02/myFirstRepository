#include <iostream>
#include "windows.h"
#include <math.h>
using namespace std;

int sum()
{
	int y = 0;
	for (int i = 0; i <= 10; i++)
	{
		y += i;
	}
	y = log10(y);
	return y;
}

int dob(int b)
{
	for (int n = 1; n <= 10; n++)
	{
		b *= n;
	}
	return: b;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//Програма №1 визначення значення суми
	/*double x, y;
	cout << "Введіть x: ";
	cin >> x;
	cout << "Результат обчислення: " << sum() + pow(x, 5);*/
	//Програма №2 визначення значення добутку
	double z, y, b = 1;
	cout << "Введіть y: ";
	cin >> y;
	z = (pow(y, 3) + dop(b) + 2) / pow(y, 2) + 5;
	cout << "Результат обчислення: " << z;
}






