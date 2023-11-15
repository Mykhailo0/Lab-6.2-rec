// Лабораторна робота № 6.2рек

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void Init(int* a, int size, int i)
{
    a[i] = rand() % 91 - 40;
    if (i < size - 1)
        Init(a, size, i + 1);
}

void Print(int* a, const int size, int i)
{
    cout << setw(4) << a[i];
    if (i < size - 1)
        Print(a, size, i + 1);
    else
        cout << endl;
}

void Change(int arr[], int size, int i, int pmin)
{
    if (i == size)
    {
        if (pmin != -1)
        {
            int temp = arr[pmin];
            arr[pmin] = arr[0];
            arr[0] = temp;
        }
        return;
    }

    if (arr[i] % 2 == 0 && (pmin == -1 || arr[i] < arr[pmin]))
    {
        pmin = i;
    }

    Change(arr, size, i + 1, pmin);
}


int main()
{
    const int n = 22;
    int a[n];

    cout << "initialization" << endl;
    Init(a, n, 0);

    cout << "vyvid masive" << endl;
    Print(a, n, 0);
    Change(a, n, 0, -1);
    cout << "vyvid masive" << endl;
    Print(a, n, 0);

    return 0;
}