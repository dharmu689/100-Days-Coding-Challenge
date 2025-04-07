// Question - https://www.hackerrank.com/contests/day-6-devhive/challenges/prime-factorization-using-functions

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> primeFactors(int n)
{
    vector<int> factors;
    while (n % 2 == 0)
    {
        factors.push_back(2);
        n /= 2;
    }

    for (int i = 3; i * i <= n; i = i + 2)
    {
        while (n % i == 0)
        {
            factors.push_back(i);
            n /= i;
        }
    }
    if (n > 2)
    {
        factors.push_back(n);
    }
    return factors;
}

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    vector<int> factors = primeFactors(n);
    for (int factor : factors)
    {
        cout << factor << " ";
    }
    cout << endl;

    return 0;
}
