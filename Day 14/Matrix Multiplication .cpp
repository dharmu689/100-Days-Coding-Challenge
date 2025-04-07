// Question - https://www.hackerrank.com/contests/day-14-recap/challenges/matrix-multiplication-60

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> matrixMultiply(const vector<vector<int>> &A, const vector<vector<int>> &B, int m, int n, int p)
{
    vector<vector<int>> result(m, vector<int>(p, 0));
 
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            for (int k = 0; k < n; k++)
            {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    return result;
}

int main()
{ 
    int m, n;
    cin >> m >> n;
    vector<vector<int>> A(m, vector<int>(n));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> A[i][j];
        }
    }
 
    int n2, p;
    cin >> n2 >> p;
    if (n != n2)
    {
        cerr << "Error: Number of columns in A must match the number of rows in B" << endl;
        return 1;
    }
    vector<vector<int>> B(n2, vector<int>(p));
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < p; j++)
        {
            cin >> B[i][j];
        }
    }

    vector<vector<int>> result = matrixMultiply(A, B, m, n, p);
 
    for (const auto &row : result)
    {
        for (const auto &elem : row)
        {
            cout << elem << " ";
        }
        cout << endl;
    }

    return 0;
}
