#include <iostream>
#include <vector>
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
    vector <CarType> carTypes;
    vector <CarEngine> carEngines;
    vector <CarDrivetrain> carDrivetrains;

    int numCars;
    cout << "Enter number of cars : ";
    cin >> numCars;

    for (int i = 0; i < numCars; i++)
    {
        CarDrivetrain cd;
        CarEngine ce;
        CarType ct;

        cout << "Car Type : ";
        cin >> ct.car_type;
        cout << "Doors : ";
        cin >> ct.door;
        cout << "Cylinders : ";
        cin >> ce.cylinders;
        cout << "Layout : ";
        cin >> ce.layout;
        cout << "Power (hp) : ";
        cin >> ce.power;
        cout << "Torque (nm) : ";
        cin >> ce.torque;
        cout << "Transmission Type : ";
        cin >> cd.transmission_type;
        cout << "Gears : ";
        cin >> cd.gears;
        cout << "Drivetrain : ";
        cin >> cd.drivetrain;

        carTypes.push_back(ct);
        carDrivetrains.push_back(cd);
        carEngines.push_back(ce);
    }

    cout << "\n\n\n";
    cout << "Car details : \n " << endl;
    for (int i=0;i<numCars;i++)
    {
        cout << "Car Type : " << carTypes[i].car_type << endl;
        cout << "Doors : " << carTypes[i].door << endl;
        cout << carEngines[i].layout << carEngines[i].cylinders << endl;
        cout << carEngines[i].power << " " << carEngines[i].torque << endl;
        cout << carDrivetrains[i].gears << " " << carDrivetrains[i].transmission_type << " " << carDrivetrains[i].drivetrain << endl;
    }
    return 0;
}