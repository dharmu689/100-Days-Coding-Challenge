// Question - https://www.hackerrank.com/contests/day-13-functions/challenges/armstrong-number-168

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0, temp = n, digits = 0;
    while (temp != 0)
    {
        temp /= 10;
        digits++;
    }
    temp = n;
    while (temp != 0)
    {
        int last_digit = temp % 10;
        sum += pow(last_digit, digits);
        temp /= 10;
    }
    if (sum == n)
        cout << "True";
    else
        cout << "False";
    return 0;
}