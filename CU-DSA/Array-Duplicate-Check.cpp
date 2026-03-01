#include <iostream>

int main()
{
    int arr[101];
    int n,elm;
    int z=0;
    std::cout << "Enter number of elements in the array : ";
    std::cin >> n;
    std::cout << "Enter elements : " << std::endl;
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
    std::cout << "\nEnter elemnt to search for : ";
    std::cin >> elm;
    std::cout << "\n";
    for(int i=0;i<n;i++)
    {
        if (elm==arr[i])
        {
            z++;
        }
    }
    std::cout << "\n";
    std::cout << "\nFirst Element : " << arr[0] << std::endl;
    std::cout << "Last Element : " << arr[n-1] << std::endl;
    std::cout << "Element " << elm << " occured " << z << " times.";
    return 0;
}