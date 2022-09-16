#include <iostream>

using namespace std;

long long fact(int n)
{
    if (n == 0)
        return 1;
    return fact(n - 1) * n;
}

long long factLoop(int n)
{
    long long result{ 1 };
    for (int i = 1; i <= n; i++)
        result *= i;
    return result;
}

long long power(int x, int n)
{
    if (n == 0)
        return 1;
    return power(x, n - 1) * x;
}

long long powerLoop(int x, int n)
{
    long long result{ 1 };
    for (int i = 0; i < n; i++)
        result *= x;
    return result;
}

unsigned long long hanoy(int n)
{
    if (n == 0)
        return 0;
    return hanoy(n - 1) * 2 + 1;
}

int main()
{
    //cout << hanoy(64) / 60 / 60 / 24 / 365;

    cout << powerLoop(5, 3);

    return 0;
}
