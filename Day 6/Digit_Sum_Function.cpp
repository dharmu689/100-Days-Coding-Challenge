// Question - https://www.hackerrank.com/contests/day-6-devhive/challenges/digit-sum-function/problem

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
    int sum = 0;
    while (n > 0)
    {
        int a = n % 10;
        sum = sum + a;
        n = n / 10;
    }
    cout << sum;
    return 0;
}
