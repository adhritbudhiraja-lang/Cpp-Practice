#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::string city_name;
    std::vector <int> v;
    bool l=true;
    int ch,pop,add,sub;

    while(l)
    {
        std::cout << "1)Create City\n2)View City Details\n3)Add Population\n4)Subtract Population\n5)Exit\n";
        std::cout << "Enter choice : ";
        std::cin >> ch;
        switch(ch)
        {
            case 1:
            {
                std::cout << "Enter City Name : ";
                std::cin >> city_name;
                std::cout << "Enter Population : ";
                std::cin >> pop;
                break;
            }
            case 2:
            {
                std::cout << "City details : \nName : " << city_name << "\nPopulation : " << pop << std::endl;
                break;
            }
            case 3:
            {
                std::cout << "Enter amount to add : ";
                std::cin >> add;
                pop = pop+add;
                std::cout << "Updated Population : " << pop << std::endl;
                break;
            }
            case 4:
            {
                std::cout << "Enter amount to reduce : ";
                std::cin >> sub;
                pop = pop-sub;
                std::cout << "Updated Population : " << pop << std::endl;
                break;
            }
            case 5:
            {
                l=false;
                break;
            }
            default:
            {
                std::cout << "Error" << std::endl;
                break;
            }
        }
    }
    return 0;
}