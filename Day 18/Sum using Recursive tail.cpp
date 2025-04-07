// Question - https://www.hackerrank.com/contests/day-18tail-recursion-and-optimization/challenges/sum-using-recursive-tail

#include <bits/stdc++.h>
using namespace std;

int sum1(int n, int sum = 0)
{
    if (n == 0)
    {
        return sum;
    }

    return sum1(n / 10, sum + (n % 10));
}
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    cout << sum1(n) << endl;
}