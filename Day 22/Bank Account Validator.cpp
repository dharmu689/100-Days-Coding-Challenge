// Question - https://www.hackerrank.com/contests/day-22-classes-and-objects/challenges/bank-account-validator/problem

#include <bits/stdc++.h>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    string accountHolder;
    float balance;

public:
    void input()
    {
        cin >> accountNumber >> accountHolder >> balance;
    }

    bool isMinimumBalance()
    {
        return balance >= 1000;
    }

    void display()
    {
        cout << accountNumber << endl;
        cout << accountHolder << endl;
        cout << (isMinimumBalance() ? "True" : "False") << endl;
    }
};

int main()
{
    BankAccount account;
    account.input();
    account.display();
    return 0;
}
