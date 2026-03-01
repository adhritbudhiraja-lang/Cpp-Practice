#include <iostream>

class Vehicle
{
    public:
    void fuel()
    {
        std::cout << "General fuel type";
    }
};
class Car : public Vehicle
{
    public:
    void fuel()
    {
        std::cout << "Car uses diesel" << std::endl;
    }
};
class Bike : public Vehicle
{
    public:
    void fuel()
    {
        std::cout << "Bike uses petrol." << std::endl;
    }
    
};
int main()
{
    Car c;
    Bike b;
    c.fuel();
    b.fuel();
    return 0;
}