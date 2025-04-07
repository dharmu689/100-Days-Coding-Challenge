#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the position of the Fibonacci number (1 ≤ n ≤ 50): ";
    cin >> n;

    if (n < 1 || n > 50)
    {
        cout << "Invalid input. Please enter a number between 1 and 50." << endl;
        return 0;
    }

    int first = 1, second = 1, current = 1, count = 3;

    if (n == 1 || n == 2)
    {
        cout << "Fibonacci number at position " << n << " is: 1" << endl;
        return 0;
    }

    while (count <= n)
    {
        current = first + second;
        first = second;
        second = current;
        count++;
    }

    cout << "Fibonacci number at position " << n << " is: " << current << endl;

    return 0;
}
