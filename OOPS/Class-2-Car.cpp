#include <iostream>
#include <string>

using namespace std;

class CarType
{
    public:
    string car_type;
    int door;
};

class CarEngine
{
    public:
    int cylinders, power, torque;
    string layout; 
};

class CarDrivetrain
{
    public:
    int gears;
    string transmission_type, drivetrain; 
};

int main()
{
    CarType ct;
    CarEngine ce;
    CarDrivetrain cd;
    ct.car_type = "Coupe";
    ct.door = 2;
    ce.cylinders = 8;
    ce.layout = "V";
    ce.power = 400;
    ce.torque = 300;
    cd.drivetrain = "RWD";
    cd.transmission_type = "DCT"; 
    cd.gears = 8;

    cout << ct.car_type << endl;
    cout << ct.door << " Door" << endl;
    cout << ce.layout << ce.cylinders << endl;
    cout << ce.power << "hp , " << ce.torque << "nm" << endl;
    cout << cd.drivetrain << endl;
    cout << "Speed" << cd.gears << " " << cd.transmission_type << endl;
    return 0;
}