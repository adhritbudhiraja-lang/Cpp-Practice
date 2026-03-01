#include <iostream>

int main()
{
    int n,i;
    std::cout << "Enter number of rows : ";
    std::cin >> n;
    for (i=0;i<n;i++)
    {
        for (int j = 0;j<=i;j++)
        {
            std::cout << "*";
        }
        std::cout << "\n";
    }
    return 0;
}