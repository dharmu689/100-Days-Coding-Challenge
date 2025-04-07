#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num1, num2;
    // Input from user
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    float Division = (float)num1 / num2;

    // Output to user
    cout << "Sum of these numbers is: " << num1 + num2 << endl;
    cout << "Subtraction of these numbers is: " << num1 - num2 << endl;
    cout << "Division of these numbers is: " << Division << endl;
}