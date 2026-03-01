#include <iostream>
#include <string>

class Car
{
    private : 
    
        std::string name;
    
    public :
    
        void input()
        {
            std::cout << "Enter car name : ";
            std::cin >> name;
        }
        void display()
        {
            std::cout << "Name of car : " << name;
        }
    
};

int main()
{
    Car c;
    
    c.input();
    c.display();
    return 0;
}