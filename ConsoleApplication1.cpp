#include <iostream>
#include "windows.h"
#include <math.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//Програма №1 визначення значення суми
	/*double x, y;
	cout << "Введіть x: ";
	cin >> x;
	y = 0;
	for (int i = 0; i <= 10; i++)
	{
		y += i;
	}
	y = log10(y);
	cout << "Результат обчислення: " << y + pow(x, 5);*/
	//Програма №2 визначення значення добутку
	double z, y, b = 1;
	cout << "Введіть y: ";
	cin >> y;
	for (int n = 1; n <= 10; n++)
	{
		b *= n;
	}
	z = (pow(y, 3) + b + 2) / pow(y, 2) + 5;
	cout << "Результат обчислення: " << z;
}






