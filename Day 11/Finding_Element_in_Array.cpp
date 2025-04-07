// Question - https://www.hackerrank.com/contests/day-11array-manipulation/challenges/finding-element-in-array/problem

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int key;
    cin >> key;
    int flag = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            flag = i;
        }
    }
    cout << flag;
    return 0;
}