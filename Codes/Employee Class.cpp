#include<iostream>
#include<cstring>
using namespace std;
class Employee
{
private:
    char *EmployeeName;
    const int EmployeeId;

public:
    // Constructor using initializer list
    Employee(const char *name,int id):EmployeeId(id)
	{
        EmployeeName=new char[strlen(name)+1];
        strcpy(EmployeeName,name);
    }
    // Setter for name (can be changed)
    void setEmployeeName(const char *name)
	{
        delete[] EmployeeName;
        EmployeeName=new char[strlen(name)+1];
        strcpy(EmployeeName,name);
    }
    // Getter for name
    char* getEmployeeName()
	{
        return EmployeeName;
    }
    // Getter for ID (cannot be changed)
    int getEmployeeId()
	{
        return EmployeeId;
    }
    // Destructor
    ~Employee()
	{
        delete[] EmployeeName;
    }
};
int main()
{
    // Creating initialized objects
    Employee Employee1("Ali",101);
    Employee Employee2("Sara",102);
    Employee Employee3("Ahmed",103);

    // Changing employee names
    Employee1.setEmployeeName("Ali Khan");
    Employee2.setEmployeeName("Sara Ahmed");

    // Displaying results using accessors
    cout<<"Employee 1: "<<Employee1.getEmployeeName()
        <<" , ID: "<<Employee1.getEmployeeId()<<endl;

    cout<<"Employee 2: "<<Employee2.getEmployeeName()
        <<" , ID: "<<Employee2.getEmployeeId()<<endl;

    cout<<"Employee 3: "<<Employee3.getEmployeeName()
        <<" , ID: "<<Employee3.getEmployeeId()<<endl;

    return 0;
}
