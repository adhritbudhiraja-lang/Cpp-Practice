#include <iostream>

int main()
{
    int a[101];
    int size;
    std::cout << "Enter size of Array (Max Size : 100) : ";
    std::cin >> size;
    for(int i=0;i<size;i++)
    {
        std::cout << "a[" << i << "] : ";
        std::cin >> a[i];
    }
    std::cout << "\nEntered Array : " << std::endl;
    for (int i=0;i<size;i++)
    {
        std::cout << "a[" << i << "] : " << a[i] << "\t";
    }
    return 0;
}