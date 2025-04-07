// Question - https://www.hackerrank.com/contests/day-9-arrays/challenges/count-odd-and-even-4

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n], even = 0, odd = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

        if (a[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    cout << even - odd << " " << endl;
    return 0;
}