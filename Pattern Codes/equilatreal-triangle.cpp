#include <iostream>

int main()
{
    int n,i,j,k;
    std::cout << "Enter number or rows : ";
    std::cin >> n;
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=n - i;j++)
        {
            std::cout << " ";
        }
        for (k=1;k<=((2 * i) - 1);k++)
        {
            std::cout << "*";
        }
        std::cout << "\n";
    }
    return 0;
}