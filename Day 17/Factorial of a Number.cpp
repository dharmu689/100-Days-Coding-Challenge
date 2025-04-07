// Question - https://www.hackerrank.com/contests/day-17-recursion/challenges/factorial-of-a-number-64/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    long long int fac = 1;
    while (n > 0)
    {
        fac = fac * n;
        n--;
    }
    cout << fac;
    return 0;
}
