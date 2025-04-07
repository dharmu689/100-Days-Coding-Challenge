// Question - https://www.hackerrank.com/contests/day-12-string-manipulation/challenges/count-vowels-in-a-string-16

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}