#include <iostream>
#include "windows.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, ".1251");
    cout<<"Введіть факторіал числа: ";
    int n, f = 1;
    cin >> n;
    for(int i = 1; i < n; i++)
    {
    	f *= i;
    }
    cout << f;
    return 0;
}