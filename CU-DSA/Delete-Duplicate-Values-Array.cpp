#include <iostream>

int main()
{
    int arr[101];
    int n,i;
    std::cout << "Enter number of elemnts in array [MAX 100] : ";
    std::cin >> n;
    for(i=0;i<n;i++)
    {
        std::cout << "arr[" << i << "] : ";
        std::cin >> arr[i];
    }
    for(i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                arr[j] = 0;
            }
        }
        std::cout << arr[i];
        
    }
    return 0;
}