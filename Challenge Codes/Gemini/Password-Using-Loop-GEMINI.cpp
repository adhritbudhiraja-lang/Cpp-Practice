#include <iostream>
#include <string>

int main()
{
    int check;
    std::string str1,str2;
    std::cout << "Enter your password : ";
    std::cin >> str1;
    retry:
    std::cout << "Confirm Password : ";
    std::cin >> str2;

    if (str1 == str2)
    {
        check = 1;
    }
    else 
    {
        check = 2;
    }

    switch (check)
    {
    case 1:
        std::cout << "Passwords matched!";
        break;
    
    case 2:
        std::cout << "Passwords do not match!\n Retry!\n";
        goto retry;
        break;

    default:
        break;
    }
    return 0;
}