#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num1, num2;
    // Input from user
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Bitwise operators
    int AND = num1 & num2;
    int OR = num1 | num2;
    int XOR = num1 ^ num2;
    int left_shift = num1 << 1;
    int right_shift = num1 >> 1;

    // Output
    cout << "Bitwise AND: " << AND << endl;
    cout << "Bitwise OR: " << OR << endl;
    cout << "Bitwise XOR: " << XOR << endl;
    cout << "Left shift: " << left_shift << endl;
    cout << "Right shift: " << right_shift << endl;
    
    return 0;
}