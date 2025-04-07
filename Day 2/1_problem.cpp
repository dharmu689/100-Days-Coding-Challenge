#include <bits/stdc++.h>
using namespace std;
int main()
{
    char Name[50];// Name can be of 50 characters
    int Roll_no, age, Class, semester;
    char gender;
    float Percentage;

    // Input from user
    cout << "Enter your Name: ";
    cin >> Name;
    cout << "Enter your Roll_no: ";
    cin >> Roll_no;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter Gender (M/F): ";
    cin >> gender;
    cout << "Enter your Class: ";
    cin >> Class;
    cout << "Enter your semester: ";
    cin >> semester;
    cout << "Enter your Percentage: ";
    cin >> Percentage;


    // Output to user
    cout <<endl<< "Student Details" << endl;
    cout << "Name: " << Name << endl;
    cout << "Roll No.: " << Roll_no << endl;
    cout << "Age: " << age << endl;
    cout << "Gender" << gender << endl;
    cout << "Class: " << Class << endl;
    cout << "Semester: " << semester << endl;
    cout << "Percentage: " << Percentage << "%" << endl;
}