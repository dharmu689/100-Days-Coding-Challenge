// Question - https://www.hackerrank.com/contests/day-7-1742721118/challenges/basic-calculator-17-3

#include <bits/stdc++.h>

using namespace std;

int basicCalculator(int a, int b, int op)
{
    switch (op)
    {
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '*':
        return a * b;
    case '/':
        if (b != 0)
        {
            return a / b;
        }
        else
        {
            return 0;
        }
    default:
        return 0;
    }
}

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a, b;
    char op;
    cout << "Enter the operator: ";

    cin >> a >> op >> b;
    cout << basicCalculator(a, b, op) << endl;
    return 0;
}
