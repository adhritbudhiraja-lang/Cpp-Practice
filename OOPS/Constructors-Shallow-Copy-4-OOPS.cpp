#include <iostream>
#include <string>
#include <cstring>

class Student
{
        
    public:
        char* name;
        int rno;
        float gpa;
    void change(const char* n)
    {
        strcpy(name,n);
    }
        
    Student(const char* n,int r, float g)
    {
        name = new char[101];
        strcpy(name,n);
        rno = r;
        gpa = g;
    }
};
int main()
{
    Student s1("Adhrit",12,8.2);
    Student s2("Adhrit_2",13,7.5);
    Student s3 = s1;
    s3.change("Adhrit");
    std::cout << s1.name << "\t\t" << s1.rno << "\t" << s1.gpa << std::endl;
    std::cout << s2.name << "\t" << s2.rno << "\t" << s2.gpa << std::endl;
    std::cout << s3.name << "\t\t" << s3.rno << "\t" << s3.gpa << std::endl;
    return 0;
}