// Question - https://www.hackerrank.com/contests/functions-ii/challenges/decimal-to-binary-44-3/problem

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n == 0)
    {
        cout << "\"0\"";
        return 0;
    }

    string binary = "";
    int absN = abs(n);

    while (absN > 0)
    {
        binary = to_string(absN % 2) + binary;
        absN /= 2;
    }

    if (n < 0)
        binary = "-" + binary;

    cout << "\"" << binary << "\"";
    return 0;
}
