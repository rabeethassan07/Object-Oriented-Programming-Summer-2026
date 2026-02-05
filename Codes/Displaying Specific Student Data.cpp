#include<iostream>
#include<string>
using namespace std;
class Student
{
public:
    string name;
    int roll_no;
    int semester;
    char section;
};
int main()
{
    Student s1, s2, s3, s4;

    cout << "Enter details of 4 students:\n\n";

    cout << "Student 1:\n";
    cin >> s1.name >> s1.roll_no >> s1.semester >> s1.section;

    cout << "Student 2:\n";
    cin >> s2.name >> s2.roll_no >> s2.semester >> s2.section;

    cout << "Student 3:\n";
    cin >> s3.name >> s3.roll_no >> s3.semester >> s3.section;

    cout << "Student 4:\n";
    cin >> s4.name >> s4.roll_no >> s4.semester >> s4.section;
    
    cout << "\nStudents belonging to Section A:\n";

    if (s1.section == 'A' || s1.section == 'a')
        cout << s1.name << " " << s1.roll_no << " " << s1.semester << " " << s1.section << endl;

    if (s2.section == 'A' || s2.section == 'a')
        cout << s2.name << " " << s2.roll_no << " " << s2.semester << " " << s2.section << endl;

    if (s3.section == 'A' || s3.section == 'a')
        cout << s3.name << " " << s3.roll_no << " " << s3.semester << " " << s3.section << endl;

    if (s4.section == 'A' || s4.section == 'a')
        cout << s4.name << " " << s4.roll_no << " " << s4.semester << " " << s4.section << endl;
    return 0;
}
