// Question - https://www.hackerrank.com/contests/recursive-problems-1743660046/challenges/reverse-a-string-recursive-approach

#include <iostream>
#include <cctype>
using namespace std;

void reverseLetters(string &s, int left, int right)
{
    if (left >= right)
        return;

    if (!isalpha(s[left]))
    {
        reverseLetters(s, left + 1, right);
    }
    else if (!isalpha(s[right]))
    {
        reverseLetters(s, left, right - 1);
    }
    else
    {

        swap(s[left], s[right]);
        reverseLetters(s, left + 1, right - 1);
    }
}

int main()
{
    string s;
    getline(cin, s);

    reverseLetters(s, 0, s.length() - 1);

    cout << s << endl;
    return 0;
}
