#include <iostream>
#include <string>

using namespace std;

class Student // Student is a user defined data type
{
    public:
    string name;
    int rno;
    float gpa;
};

int main()
{
    Student s1,s2;
    s1.name = "Adhrit";
    s1.rno = 10;
    s1.gpa = 8.0;
    s2.name = "Adhrit_2";
    s2.rno = 12;
    s2.gpa = 8.2;

    cout << s1.name << " " << s1.rno << " " << s1.gpa << endl;
    cout << s2.name << " " << s2.rno << " " << s2.gpa;
    return 0;
}