// https://www.hackerrank.com/contests/day-20-functions-iv/challenges/calculate-area-using-function-overloading/problem

#include <bits/stdc++.h>
using namespace std;

// Overloaded function for square
int area(int side)
{
    return side * side;
}

// Overloaded function for rectangle
int area(int length, int breadth)
{
    return length * breadth;
}

// Overloaded function for circle
double area(double radius)
{
    const double PI = 3.14159;
    return PI * radius * radius;
}

int main()
{
    int t; // t is the choice: 1-square, 2-rectangle, 3-circle
    cin >> t;

    if (t == 1)
    {
        // Square
        int side;
        cin >> side;
        cout << area(side) << endl;
    }
    else if (t == 2)
    {
        // Rectangle
        int length, breadth;
        cin >> length >> breadth;
        cout << area(length, breadth) << endl;
    }
    else if (t == 3)
    {
        // Circle
        double radius;
        cin >> radius;
        cout << fixed << setprecision(5) << area(radius) << endl;
    }
    else
    {
        cout << "Invalid choice" << endl;
    }

    return 0;
}
