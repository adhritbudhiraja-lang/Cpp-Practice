#include <iostream>
#include <string>

class Hostel
{
    public : 
        std::string hostel_name,hosteller;
        int room_no,occupancy;

    Hostel(std::string hn,std::string ht,int rn,int op)
    {
        hostel_name = hn;
        hosteller = ht;
        room_no = rn;
        occupancy = op;
    }
};
int main()
{
    Hostel H1("Zakir-C","Adhrit",1006,3),H2("Zakir-C","Adhrit-2",1007,5);

    std::cout << "Hostel name : " << H1.hostel_name << std::endl << "Occupied by : " << H1.hosteller << std::endl << "Full capacity : " << H1.occupancy << std::endl << "Room Number : " << H1.room_no;
    std::cout << "\n" << std::endl;
    std::cout << "Hostel name : " << H2.hostel_name << std::endl << "Occupied by : " << H2.hosteller << std::endl << "Full capacity : " << H2.occupancy << std::endl << "Room Number : " << H2.room_no;
    return 0;
}