#include <iostream>
#include <string>

int main()
{
    int i =0;
    std::string str;
    std::cout << "Enter a string : ";
    std::cin >> str;
    
    for (char c : str)
    {
        for (int j = 0; j <= i; j++)
        {
            std::cout << str[j];
        }
        std::cout << "\n";
        i++;
    }
    return 0;
}