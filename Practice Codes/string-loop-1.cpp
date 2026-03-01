#include <iostream>
#include <string>

int main()
{
    std::string str;
    std::cout << "Enter a string : ";
    std::cin >> str;
    
    for (char c : str)
    {
        std::cout << c << " ";
    }
    return 0;
}