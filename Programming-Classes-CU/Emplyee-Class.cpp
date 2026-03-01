#include <iostream>

class Employee
{
    public:
        std::string name,id;
        long long salary,gross;
    
    Employee()
    {

    }
    Employee(std::string name, std::string id, long long salary,long long gross)
    {
        this->name=name;
        this->id=id;
        this->salary=salary;
        this->gross=gross;
    }
    void get()
    {
        std::cout << "Enter employee name : ";
        std::cin >> name;
        std::cout << "Enter ID : ";
        std::cin >> id;
        std::cout << "Enter Salary (Yearly) : ";
        std::cin >> salary;
        if(salary<0)
        {
            std::cout << "Invalid amount!"
        }
    }
    void display()
    {
        std::cout << "Employee name : " << name << "\nID : " << id << "\nSalary (base) : " << salary  << "\nSalaray (gross) : " << gross << std::endl;
    }
};
int main()
{

}