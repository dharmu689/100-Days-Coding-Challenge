// Question - https://www.hackerrank.com/contests/day-13-functions/challenges/increase-array-by-value

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    int b = 5 + x;
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i] += b;
        cout << a[i] << " ";
    }

    return 0;
}