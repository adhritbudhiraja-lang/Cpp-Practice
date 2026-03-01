#include <iostream>

int main()
{
    int n,sum=0;
    int arr[100];
    std::cout << "Enter number of elements : ";
    std::cin >> n;
    for(int i=0;i<n;i++)
    {
        std::cout << "arr[" << i << "] : ";
        std::cin >> arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            sum=sum+arr[i];
        }
        else
        {
            sum=sum-arr[i];
        }
        
    }
    std::cout << "Sum of even indexes & subtraction of odd indexes, ans : " << sum;
    return 0;
}