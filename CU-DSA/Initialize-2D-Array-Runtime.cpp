#include <iostream>

int main()
{
    int a[101][101];
    int rows,col;
    std::cout << "Enter number of rows (Max 100) : ";
    std::cin >> rows;
    std::cout << "Enter number of columns (Max 100) : ";
    std::cin >> col;
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=col;j++)
        {
            std::cout << "a[" << i << "][" << j << "] : ";
            std::cin >> a[i][j];
        }
    }
    std::cout << "\nEntered 2D Array (Matrix) : \n" << std::endl;
    for (int i=1;i<=rows;i++)
    {
        for(int j=1;j<=col;j++)
        {
            std::cout << " " << a[i][j];
        }
        std::cout << "\n";
    }
    return 0;
}