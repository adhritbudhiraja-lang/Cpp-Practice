#include <iostream>
#include <string>

class Parent
{
    public:
        std::string name;
        int age;

    Parent()
    {
        std::cout << "\nParent constructor\n" << std::endl;;
    }
};
class Child : public Parent 
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
    Child()
    {
        std::cout << "\nChild Constructor\n";
    }
};
int main()
{
    Child c;
    c.GetInfo();
    c.Display();
    return 0;
}
// First the parent constructor is called, then the child one.
// Opposite in destructor