#include <iostream>
#include <string>

int main()
{
    std::string name;
    std::cout << "Enter your name : ";
    // std::cin >> name; Works likes scanf, will stop checking after space
    std::getline(std::cin, name);  // Works like fgets
    std::cout << "Hello " << name;
    return 0;
}