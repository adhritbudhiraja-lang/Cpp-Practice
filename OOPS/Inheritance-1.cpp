#include <iostream>
#include <string>

class Person
{
    public:
        std::string name;
        int age;

    Person()
    {
        
    }
};
class Student : public Person // Inherits from class person using public mode -> Inherits name & age in this code
{
    public:
        int rollno;
    
    void GetInfo()
    {
        std::cout << "Enter name : ";
        std::cin >> name;
        std::cout << "Enter age : ";
        std::cin >> age;
        std::cout << "Enter roll number : ";
        std::cin >> rollno;
        std::cout << "\n" << std::endl;
    }
    void Display()
    {
        std::cout << "Name : " << name << "\nAge : " << age << "\nRoll number : " << rollno << std::endl;
    }
};
int main()
{
    Student s;
    s.GetInfo();
    s.Display();
    return 0;
}