#include<iostream>
#include<cstring>
using namespace std;
class Employee
{
private:
    char* firstName;
    string lastName;
    int monthlySalary;

public:
    // Constructor
    Employee()
	{
        firstName = nullptr;
        monthlySalary = 0;
    }
    // Setter function
    void setData(const char* fName, string lName, int salary) {
        // Allocate memory for first name
        firstName = new char[strlen(fName) + 1];
        strcpy(firstName, fName);

        lastName = lName;

        if (salary > 0)
            monthlySalary = salary;
        else
            monthlySalary = 0;
    }

    // Getter functions
    char* getFirstName()
	{
        return firstName;
    }

    string getLastName()
	{
        return lastName;
    }

    int getMonthlySalary()
	{
        return monthlySalary;
    }

    // Function to calculate yearly salary
    int getYearlySalary()
	{
        return monthlySalary * 12;
    }
    // Function to give 10% raise
    void giveRaise()
	{
        monthlySalary += monthlySalary * 0.10;
    }
    // Destructor
    ~Employee()
	{
        delete[] firstName;
    }
};
int main()
{
    Employee e1, e2;

    // Initialize data
    e1.setData("Ali", "Khan", 50000);
    e2.setData("Sara", "Ahmed", 60000);

    // Display yearly salaries
    cout << "Yearly Salary of " << e1.getFirstName() << " "
         << e1.getLastName() << ": "
         << e1.getYearlySalary() << endl;

    cout << "Yearly Salary of " << e2.getFirstName() << " "
         << e2.getLastName() << ": "
         << e2.getYearlySalary() << endl;

    // Give 10% raise
    e1.giveRaise();
    e2.giveRaise();

    cout<< "\nAfter 10% Raise:\n";

    cout<< "Yearly Salary of " << e1.getFirstName() << " "
        << e1.getLastName() << ": "
        << e1.getYearlySalary() << endl;

    cout << "Yearly Salary of " << e2.getFirstName() << " "
         << e2.getLastName() << ": "
         << e2.getYearlySalary() << endl;
    return 0;
}
