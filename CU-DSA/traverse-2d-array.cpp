#include <iostream>

int main()
{
    int a[100][100],r,c;
    std::cout << "Enter number of rows : ";
    std::cin >> r;
    std::cout << "Enter number of columns : ";
    std::cin >> c;
    std::cout << "\nEnter elements : \n";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            std::cout << "a[" << i << "][" << j << "] : ";
            std::cin >> a[i][j];
        }
    }
    std::cout << "Entered matrix : " << std::endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            std::cout << a[i][j] << "\t";
        }
        std::cout << "\n";
    }
    return 0;
}