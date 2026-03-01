#include <iostream>

class Animal
{
    public:
    void speak()
    {
        std::cout << "Animal speaks.";   
    }
};
class Dog : public Animal
{
    public:
    void bark()
    {
        std::cout << "Dog barks.";
    }
};
int main()
{
    Dog d;
    d.bark();
    return 0;
}