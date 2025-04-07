// Question - https://www.hackerrank.com/contests/day-16-functions-iii/challenges/string-palindrome-37

#include <iostream>
#include <cctype> // for isalnum and tolower
#include <string>
using namespace std;

bool isPalindrome(const string &s)
{
    string filteredStr;

    // Filter non-alphanumeric characters and convert to lowercase
    for (char c : s)
    {
        if (isalnum(c))
        {
            filteredStr += tolower(c);
        }
    }

    // Compare filtered string with its reverse
    int left = 0, right = filteredStr.size() - 1;
    while (left < right)
    {
        if (filteredStr[left] != filteredStr[right])
        {
            return false;
        }
        left++;
        right--;
    }

    return true;
}

int main()
{
    string s;
    getline(cin, s); // Read full input including spaces
    cout << (isPalindrome(s) ? "True" : "False") << endl;
    return 0;
}
