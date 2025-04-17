// Question - https://www.hackerrank.com/contests/day-23constructors-and-destructors/challenges/create-an-array-class/problem

#include <bits/stdc++.h>
using namespace std;

class MyArray
{
private:
    vector<int> arr;

public:
    MyArray(int capacity)
    {
        arr.resize(capacity, 0);
    }

    int get(int index)
    {
        if (index >= 0 && index < arr.size())
        {
            return arr[index];
        }
        else
        {
            return -1;
        }
    }

    void set(int index, int value)
    {
        if (index >= 0 && index < arr.size())
        {
            arr[index] = value;
        }
    }

    int size()
    {
        return arr.size();
    }
};

int main()
{
    int capacity;
    cin >> capacity;

    MyArray myArr(capacity);

    int choice;
    cin >> choice;

    if (choice == 1)
    {
        int index;
        cin >> index;
        cout << myArr.get(index) << endl;
    }
    else if (choice == 2)
    {
        int index, value;
        cin >> index >> value;
        myArr.set(index, value);
    }
    else if (choice == 3)
    {
        cout << myArr.size() << endl;
    }

    return 0;
}
