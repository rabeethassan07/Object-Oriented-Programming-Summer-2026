#include<iostream>
using namespace std;
int main()
{
    int rollNo;
    float m1, m2, m3, m4, m5;
    float total, percentage;

    // Input
    cout << "Enter Roll Number: ";
    cin >> rollNo;
    
    cout << "Enter marks of 5 subjects:\n";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;
    
    // Calculation
    total = m1 + m2 + m3 + m4 + m5;
    percentage = (total / 500) * 100;
    
    // Output
    cout << "\nRoll Number: " << rollNo << endl;
    cout << "Total Marks: " << total << endl;
    cout << "Percentage: " << percentage << "%" << endl;
    return 0;
}
