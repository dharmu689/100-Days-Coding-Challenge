// Question - https://www.hackerrank.com/contests/day-8nested-loops-and-control-flow/challenges/valid-triangle-1-2/problem

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b > c && b + c > a && c + a > b)
    {
        cout << "1";
    }
    else
    {
        cout << "-1";
    }
    return 0;
}