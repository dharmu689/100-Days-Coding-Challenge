#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num1, num2;
    // Input from user
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Output to user
    if (num1 == num2) // if both numbers are equal
    {
        cout << "1" << endl;
    }
    else
    {
        cout << "0" << endl;
    }

    if (num1 != num2) // if both numbers are not equal
    {
        cout << "1" << endl;
    }
    else
    {
        cout << "0" << endl;
    }

    if (num1 > num2) // if num1 is greater than num2
    {
        cout << "1" << endl;
    }
    else
    {
        cout << "0" << endl;
    }

    if (num1 < num2) // if num1 is less than num2
    {
        cout << "1" << endl;
    }
    else
    {
        cout << "0" << endl;
    }

    if (num1 >= num2) // if num1 is greater than or equal to num2
    {
        cout << "1" << endl;
    }
    else
    {
        cout << "0" << endl;
    }

    if (num1 <= num2) // if num1 is less than or equal to num2
    {
        cout << "1" << endl;
    }
    else
    {
        cout << "0" << endl;
    }
}