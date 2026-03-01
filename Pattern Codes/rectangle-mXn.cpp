#include <iostream>

int main()
{
    int l,b;
    std::cout << "Enter Lenght  : ";
    std::cin >> l;
    std::cout << "Enter Breadth : ";
    std::cin >> b;
    for (int i = 0;i<l;i++)
    {
        for (int j = 0;j<b;j++)
        {
            std::cout << "*";
        }
        std::cout << "\n";
    }
    return 0;
}