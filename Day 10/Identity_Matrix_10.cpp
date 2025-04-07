// Question - https://www.hackerrank.com/contests/day-102d-arrays/challenges/identity-matrix-10/problem

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int matrix[n][n];
    bool isIdentity = true;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> matrix[i][j];
            if ((i == j && matrix[i][j] != 1) || (i != j && matrix[i][j] != 0))
            {
                isIdentity = false;
            }
        }
    }

    if (isIdentity)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }

    return 0;
}
