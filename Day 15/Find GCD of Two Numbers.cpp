// Question - https://www.hackerrank.com/contests/functions-ii/challenges/find-gcd-of-two-numbers-5

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    while (b != 0)
    {
        int t = b;
        b = a % b;
        a = t;
    }
    cout << a << endl;
    return 0;
}