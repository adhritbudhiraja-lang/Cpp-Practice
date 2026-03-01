#include <iostream>

class Vehicle
{
    public:
        std::string model;
        int speed;
    Vehicle(std::string model,int speed)
    {
        this->model=model;
        this->speed=speed;
    }
    void display()
    {
        std::cout << "Model : " << model << "\nSpeed (km/hr) : " << speed << std::endl;
    }
};
class Car : public Vehicle
{
    public:
        int door;
    Car(std::string model, int speed,int door) : Vehicle(model,speed)
    {
        this->door=door;
    }
    void display()
    {
        Vehicle::display();
        std::cout << "Number of doors : " << door << std::endl;
    }
};
int main()
{
    int speed,door;
    std::string model;
    std::cout << "Enter model : ";
    std::cin >> model;
    std::cout << "Enter speed (km/hr) : ";
    std::cin >> speed;
    std::cout << "Enter number of doors : ";
    std::cin >> door;
    Car c(model,speed,door);
    std::cout << "\n" << std::endl;
    c.display();
    return 0;
}