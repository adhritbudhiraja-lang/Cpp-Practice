#include <iostream>
#include <string>

int main()
{
    int num;
    std::string name;
    std::cout << "The Username Generator \n";
    std::cout << "Enter a name : ";
    std::cin >> name;
    std::cout << "Enter a number : ";
    std::cin >> num;
    std::cout << "1) " << name << "_" << num << "\n";
    std::cout << "2) " << num << "_" << name << "\n";
    std::cout << "3) " << name << "-" << num << "\n";
    std::cout << "4) " << name << "" << num << "\n";
    std::cout << "5) " << num << "-" << name << "\n";
    std::cout << "6) " << num << "" << name << "\n";
    return 0;
}