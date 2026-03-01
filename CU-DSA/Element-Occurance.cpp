#include <iostream>

int main()
{
    int arr[101];
    int b[101] = {0};
    int n;
    int z=0;
    std::cout << "Enter number of elements : ";
    std::cin >> n;
    for(int i=0;i<n;i++)
    {
        std::cout << "arr[" << i << "] : ";
        std::cin >> arr[i];
    }
    std::cout << "\n";
    for(int i=0;i<n;i++)
    {
        std::cout << "arr[" << i << "] : " << arr[i] << " "; 
    }
    std::cout << "\n";
    for(int i=0;i<n;i++)
    {
        if (b[i]==1)
        {
            continue;
        }
        for(int j=0;j<n;j++)
        {
            if(arr[j]==arr[i])
            {
                z++;
                b[j] = 1;
            }
        }
        std::cout << "Element " << arr[i] << " occured " << z << " times." << std::endl;
        z=0;
    }
    return 0;
}