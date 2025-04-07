// Question - https://www.hackerrank.com/contests/day-6-devhive/challenges/nth-fibonacci-using-functions-only

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int nthFibonacci(int n)
{
    if (n == 1)
    {
        return 0;
    }
    if (n == 2)
    {
        return 1;
    }
    int a = 0, b = 1, fib;
    for (int i = 3; i <= n; ++i)
    {
        fib = a + b;
        a = b;
        b = fib;
    }
    return fib;
}

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    cout << nthFibonacci(n);
    return 0;
}
