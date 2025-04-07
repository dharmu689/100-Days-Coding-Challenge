// Question - https://www.hackerrank.com/contests/day-14-recap/challenges/array-rotation-55-4

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int d;
    cin >> d;
    d = d % n;
    vector<int> rotatedArray(n);
    for (int i = 0; i < n; i++)
    {
        rotatedArray[i] = a[(i + d) % n];
    }
    for (int i = 0; i < n; i++)
    {
        cout << rotatedArray[i] << " ";
    }
    cout << endl;
    return 0;
}