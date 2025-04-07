#include <bits/stdc++.h>
using namespace std;

int main()
{
    float BS, HRA, TA, GS;
    char gender;

    // Input values
    cout << "Enter Basic Salary (BS), HRA, TA, and Gender (M/F): ";
    cin >> BS >> HRA >> TA >> gender;

    // Modify Basic Salary based on Gender
    if (gender == 'M' || gender == 'm')
    {
        BS += BS * 0.10; // Increase by 10% for Male
    }
    else if (gender == 'F' || gender == 'f')
    {
        BS += BS * 0.20; // Increase by 20% for Female
    }

    // Calculate Gross Salary
    GS = BS + HRA + TA;

    // Output Gross Salary
    cout << "Gross Salary (GS): " << GS << endl;

    return 0;
}
