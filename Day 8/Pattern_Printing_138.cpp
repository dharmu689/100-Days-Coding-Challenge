// Question - https://www.hackerrank.com/contests/day-8nested-loops-and-control-flow/challenges/pattern-printing-138

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= i; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}