#include <stdio.h>
#include "windows.h"
using namespace std;

float V(int Fa, int g, int p)
{
	int V = Fa / g * p;
	return V;
}
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int p = 1030, g = 10;
    int m = 8, Fa = m * g;

    printf("Об’єм зануреної частини судна: ");
    printf("%f\n", V(Fa, g, p));
}