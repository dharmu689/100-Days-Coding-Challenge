// Question -https://www.hackerrank.com/contests/day-18tail-recursion-and-optimization/challenges/reverse-digit-2

#include <bits/stdc++.h>
using namespace std;

int reverse(int n, int rev = 0)
{
    if (n == 0)
    {
        return rev;
    }
    return reverse(n / 10, rev * 10 + (n % 10));
}
int main()
{
    int n;
    cin >> n;
    cout << reverse(n) << endl;
    return 0;
}