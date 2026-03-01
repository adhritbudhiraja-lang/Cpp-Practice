#include <iostream>
#include <vector>

int main()
{
    int a[101],b[101];
    int n,i,elm;
    std::cout << "Enter number of elemnts in array a1 [MAX 100] : ";
    std::cin >> n;
    for(i=0;i<n;i++)
    {
        std::cout << "a1[" << i << "] : ";
        std::cin >> a[i];
    }
    std::cout << "\nArray a[] copied to new array b[] & reversed :\n";
    for(i=0;i<n;i++)
    {
        b[i] = a[i];
    }
    for(i=n-1;i>=0;i--)
    {
        std::cout << b[i] << " ";
    }
    return 0;
}