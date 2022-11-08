// Lab06_1(1).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* a, const int n, const int Low, const int High,int i)
{
    a[i] = Low + rand() % (High - Low + 1);
    if (i < n - 1)
        Create(a, n, Low, High, i + 1);
}
void Print(int* a, const int size, int i)
{
    cout << setw(4) << a[i];
    if (i < size - 1)
        Print(a, size, i + 1);
    else
        cout << endl;
}
void Mode(int* a, const int size, int i)
{
    if ((a[i] > 0) || (a[i] % 3 != 0))
        a[i] = 0;
    if (i < size - 1)
            Mode(a, size, i + 1); 
}
int Number(int* a, const int size, int i, int k)
{
    if ((a[i] > 0) || (a[i] % 3 != 0))
        k++;
    if (i < size - 1)
        return Number(a, size, i + 1, k);
    else
        return k;
}
int Sum(int* a, const int size, int i, int S)
{
    if ((a[i] > 0) || (a[i] % 3 != 0))
        S += a[i];
    if (i < size - 1)
        return Sum(a, size, i + 1, S);
    else
        return S;
}

int main()
{
    srand((unsigned)time(NULL));

    const int n = 22;
    int a[n];

    int Low = -10;
    int High = 35;

    Create(a, n, Low, High,0);
    Print(a, n,0);

    cout << " " << "N = " << Number(a, n,0,0) << endl;
    cout << " " << "S = " << Sum(a, n,0,0) << endl;

    Mode(a, n,0);
    Print(a, n,0);

    return 0;
}
