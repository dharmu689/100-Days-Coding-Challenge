//Question - https://www.hackerrank.com/contests/recursive-problems-1743660046/challenges/tower-of-hanoi-49

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int moves=pow(2,n)-1;
    cout<<moves<<endl;
}