#include <iostream>

int main()
{
    int r,i=0,j=0;
    std::cout << "Enter the number of rows : ";
    std::cin >> r;
    for (i=0;i<r;i++)
    {
        for (j=0;j<r;j++)
        {
            std::cout << "*";
        }
        std::cout << "\n";
    }
    return 0;
}