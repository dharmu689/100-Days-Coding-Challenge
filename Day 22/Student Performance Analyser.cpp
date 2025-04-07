// Question - https://www.hackerrank.com/contests/day-22-classes-and-objects/challenges/student-performance-analyser/problem

#include <bits/stdc++.h>
using namespace std;

class Student
{
    int roll_number;
    int marks[3];

public:
    Student(int r, int m1, int m2, int m3)
    {
        roll_number = r;
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;
    }

    bool isPassed()
    {
        return (marks[0] >= 40 && marks[1] >= 40 && marks[2] >= 40);
    }

    int getRollNumber()
    {
        return roll_number;
    }
};

int main()
{
    int roll_number, m1, m2, m3;
    cin >> roll_number;
    cin >> m1 >> m2 >> m3;

    Student s(roll_number, m1, m2, m3);

    cout << s.getRollNumber() << endl;
    cout << (s.isPassed() ? "True" : "False") << endl;

    return 0;
}
