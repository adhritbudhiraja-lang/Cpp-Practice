#include <iostream>

int main()
{
    int arr[11] = {1,2,3,4,5,6,7,8,9,10};
    for (int i = 0; i < 11; i++) 
    {
        std::cout << "Memory address of arr[" << i << "]: " << &arr[i] << std::endl;
    }
    return 0;
}