#include <iostream>

int main()
{
    int r;
    std::cout << "Enter number of rows : ";
    std::cin >> r;

    for (int i = 1; i <= r; i++) // Loop for rows
    {
        for (int j = 1; j <= r - i; j++) // Print spaces
        {
            std::cout << " ";
        }
        for (int k = 1; k <= i; k++) // Print stars
        {
            std::cout << "*";
        }
        std::cout << "\n"; // Move to the next line after each row
    }

    return 0;
}