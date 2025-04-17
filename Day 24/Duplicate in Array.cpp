// Question - https://www.hackerrank.com/contests/contest-i-1/challenges/duplicate-in-array-3-2/problem

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Using a set to track duplicates
    unordered_set<int> seen;
    for (int i = 0; i < n; i++)
    {
        if (seen.find(arr[i]) != seen.end())
        {
            cout << "YES" << endl;
            return 0;
        }
        seen.insert(arr[i]);
    }

    cout << "NO" << endl;
    return 0;
}