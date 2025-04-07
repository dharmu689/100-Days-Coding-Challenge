// Question - https://www.hackerrank.com/contests/day-9-arrays/challenges/average-of-array

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum = sum + a[i];
    }
    cout << sum / n;
    return 0;
}
