// Question - https://www.hackerrank.com/contests/day-102d-arrays/challenges/row-wise-sum-of-matrix-1

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int matrix[n][m];
    int rowSum[n];

    for (int i = 0; i < n; ++i)
    {
        rowSum[i] = 0;
        for (int j = 0; j < m; ++j)
        {
            cin >> matrix[i][j];
            rowSum[i] += matrix[i][j];
        }
    }

    for (int i = 0; i < n; ++i)
    {
        cout << rowSum[i] << " ";
    }
    cout<<endl;

    return 0;
}