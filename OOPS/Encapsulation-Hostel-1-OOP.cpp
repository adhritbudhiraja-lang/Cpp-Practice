#include <iostream>
#include <string>
#include <chrono>
#include <thread>

void slowPrint(const std::string &text, int delay_ms)
{
    for (char c : text)
    {
        std::cout << c << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(delay_ms));
    }
}

class Warden
{
private:
    std::string warden_id, password;

public:
    std::string warden_name;

    Warden(std::string w_id = "", std::string pass = "")
    {
        warden_id = w_id;
        password = pass;
    }

    void Warden_Input()
    {
        slowPrint("Loading........\nLoading Complete!\n", 150);

        std::cout << "Enter Warden ID : ";
        std::cin >> warden_id;

        std::cout << "Enter Password : ";
        std::cin >> password;

        slowPrint("Validating......\nValidation Complete!\n", 150);

        std::cout << "Enter name : ";
        std::cin >> warden_name;

        slowPrint("Loading.............................\nLoading Complete!\n",150);
    }
};

class Hosteller
{
private:
    std::string detainee_status;

public:
    std::string name;
    int room, occupancy;

    Hosteller(std::string status = "")
    {
        detainee_status = status;
    }
};

int main()
{
    Warden w1;
    w1.Warden_Input();

    return 0;
}
