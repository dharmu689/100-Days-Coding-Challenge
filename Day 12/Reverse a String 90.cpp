// Question - https://www.hackerrank.com/contests/day-12-string-manipulation/challenges/reverse-a-string-90

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    cout << s << endl;
    return 0;
}