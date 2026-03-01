#include <iostream>
#include <string>

int main()
{
    std::string str1,str2;
    std::cout << "Enter first string : ";
    std::cin >> str1;
    std::cout << "Enter second string : ";
    std::cin >> str2;
    std::string str = str1 + " " + str2;
    std::cout << "Concatenation of both the strings : " << str;
    return 0;
}