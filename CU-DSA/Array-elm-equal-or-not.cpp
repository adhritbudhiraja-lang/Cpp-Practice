#include <iostream>

int main()
{
    int n,x=0;
    int arr[1001];
    std::cout << "Enter number of terms in the array [Max 1000]: ";
    std::cin >> n;
    for(int i=0;i<n;i++)
    {
        std::cout << "arr[" << i << "] : ";
        std::cin >> arr[i];
    }
    std::cout << "Entered Array : ";
    for(int i=0;i<n;i++)
    {
        std::cout << arr[i] << " ";
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arr[0])
        {
            x++;
        }
    }
    if(x!=0)
    {
        std::cout << "\nEntered array elements are not equal.";
    }
    else
    {
        std::cout << "\nEntered array elements are equal.";
    }
    return 0;
}