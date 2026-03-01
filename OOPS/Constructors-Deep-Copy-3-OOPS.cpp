#include <iostream>
#include <string>

class Student
{
        
    public:
        std::string name;
        int rno;
        float gpa;
    
    Student(std::string n,int r, float g)
    {
        name = n;
        rno = r;
        gpa = g;
    }
};
int main()
{
    Student s1("Adhrit",12,8.2);
    Student s2("Adhrit_2",13,7.5);
    Student s4(s2);
    s4.name = "Adhrit_4";
    Student s3 = s1; // Deep copy
    s3.name = "Adhrit_3"; // Changes name from s1 to this, keeping others same
    std::cout << s1.name << "\t\t" << s1.rno << "\t" << s1.gpa << std::endl;
    std::cout << s2.name << "\t" << s2.rno << "\t" << s2.gpa << std::endl;
    std::cout << s3.name << "\t" << s3.rno << "\t" << s3.gpa << std::endl;
    std::cout << s4.name << "\t" << s4.rno << "\t" << s4.gpa << std::endl;
    return 0;
}