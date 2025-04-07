//Question - https://www.hackerrank.com/contests/day-17-recursion/challenges/fibonacci-sequence-50-1

#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n;
    cin>>n;
    cout << fibonacci(n) << endl;
}