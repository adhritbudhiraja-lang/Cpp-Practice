#include <iostream>
#include <string>

int main()
{
    int n,num,maxVal;
    maxVal = -99999;

    std::cout << "How many numbers do you want to enter : ";
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::cout << "Enter number (" << i+1 << ") : ";
        std::cin >> num; 

        if (num > maxVal)
        {
            maxVal = num;
        }
    }
    std::cout << "Largest Number : " << maxVal;
    return 0;
}