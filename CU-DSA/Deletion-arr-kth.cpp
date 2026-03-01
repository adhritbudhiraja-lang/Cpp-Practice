#include <iostream>

int main()
{
    int a[1000],k,n;
    std::cout << "Enter number of elements in the array : ";
    std::cin >> n;
    for(int i=0;i<n;i++)
    {
        std::cin >> a[i];
    }
    std::cout << "\nEntered array : ";
    for(int i=0;i<n;i++)
    {
        std::cout << a[i] << " ";
    }
    std::cout << "\nEnter position to delete : ";
    std::cin >> k;
    if(k>n)
    {
        std::cout << "Invalid.";
    }
    else
    {
        for(int i=k;i<n-1;i++)
        {
            a[i] = a[i+1];
        }
        n--;
        std::cout << "\nUpdated array : ";
        for(int i=0;i<n;i++)
        {
            std::cout << a[i] << " ";
        }
    }
    return 0;
}