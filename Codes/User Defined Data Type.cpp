#include<iostream>
using namespace std;
class Student
{
    public:
        string name;
        int rollno;
        float gpa;
};
int main()
{
    Student s1;
    s1.name = "Rabeet";
    s1.rollno = 197;
    s1.gpa = 3.57;

    Student s2;
    s2.name = "Shayan";
    s2.rollno = 198;
    s2.gpa = 3.44;

    cout<<s1.nameS<<" "<<s1.rollno<<" "<<s1.gpa<<" "<<endl;
    cout<<s2.name<<" "<<s2.rollno<<" "<<s2.gpa<<" "<<endl;
}
