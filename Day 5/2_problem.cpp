#include <iostream>
using namespace std;

int main()
{
    int n;
    bool isPrime = true; // Assume the number is prime

    cout << "Enter a number: ";
    cin >> n;

    if (n <= 1) // 0 and 1 are not prime numbers
    {
        isPrime = false;
    }
    else
    {
        for (int i = 2; i * i <= n; i++) 
        {
            if (n % i == 0) // If n is divisible by i
            {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime) // If the number is prime
    {
        cout << "Prime" << endl;
    }
    else
    {
        cout << "Not Prime" << endl;
    }

    return 0;
}
