#include <stdio.h>
#include "windows.h"
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int p = 1030, g = 10;
    int m = 8, Fa = m * g;
    float V;

    V = Fa / g * p;

    printf("Об’єм зануреної частини судна: ");
    printf("%f\n", V);
}