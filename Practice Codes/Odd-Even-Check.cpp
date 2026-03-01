#include <iostream>

int main()
{
    int num;
    std::cout << "Enter a number : ";
    std::cin >> num;

    if (num % 2 == 0)
    {
        std::cout << "" << num << " is even.";
    }
    else 
    {
        std::cout << "" << num << " is odd.";
    }
return 0;
}