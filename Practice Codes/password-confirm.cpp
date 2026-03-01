#include <iostream>
#include <string>

int main()
{
    std::string str1,str2;
    // str1 = password
    // str2 = confirm password
    std::cout << "Enter your password : ";
    std::cin >> str1;
    std::cout << "Confirm Password : ";
    std::cin >> str2;

    if (str1 == str2)
        std::cout << "Password matched!";
    else 
        std::cout << "Passwords do not match!";

    return 0;
}