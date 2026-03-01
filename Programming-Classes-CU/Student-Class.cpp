#include <iostream>

class Student
{
    public: 
        std::string name;
        int age;
        std::string UID;
        int grade;

    Student(std::string name, int age, std::string UID,int grade)
    {
        this->name=name;
        this->UID=UID;
        this->age=age;
        this->grade=grade;
    }
    void display()
    {
        std::cout << name << "\n" << age << "\n" << UID << "\n" << grade << std::endl;
    }
};
int main()
{
    Student s("Adhrit",18,"25BAI70018",90);
    s.display();
    return 0;
}