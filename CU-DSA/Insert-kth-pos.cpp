#include <iostream>

int main()
{
    int a[1000],n,k,val;
    std::cout << "Enter number of elements in the array : ";
    std::cin >> n;
    std::cout << "Enter elements : \n";
    for(int i=0;i<n;i++)
    {
        std::cin >> a[i];
    }
    std::cout << "\nEntered Array : ";
    for(int i=0;i<n;i++)
    {
        std::cout << a[i] << " ";
    }
    std::cout << "\nEnter position to insert element : ";
    std::cin >> k;
    k = k - 1;
    if(k>=0 && k<=n)
    {
        std::cout << "Enter value : ";
        std::cin >> val;
        for (int i=n;i>k;i--)
        {
            a[i] = a[i-1];
        }
        a[k] = val;
        n++;
        std::cout << "Updated array : ";
        for(int i=0;i<n;i++)
        {
            std::cout << a[i] << " ";
        }
    }
    else
    {
        std::cout << "Invalid.";
    }
    return 0;
}