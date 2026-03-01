#include <iostream>

int main()
{
    int a[100],b[100],c[200];
    int n,k=0,temp;
    std::cout << "Enter number of elements in both the arrays : ";
    std::cin >> n;
    std::cout << "\nEnter elements for array A : " << std::endl;
    for(int i=0;i<n;i++)
    {
        std::cout << "a[" << i << "] : ";
        std::cin >> a[i];
    }
    std::cout << "\nEnter elements for array B : " << std::endl;
    for(int i=0;i<n;i++)
    {
        std::cout << "b[" << i << "] : ";
        std::cin >> b[i];
    }
    for(int i=0;i<n;i++)
    {
        c[k] = a[i];
        k++;
    }
    for(int i=0;i<n;i++)
    {
        c[k] = b[i];
        k++;
    }
    for(int i=0;i<k-1;i++)
    {
        for(int j=0;j<k-i-1;j++)
        {
            if(c[j]>=c[j+1])
            {
                temp = c[j];
                c[j] = c[j+1];
                c[j+1] = temp;
            }
        }
    }
    std::cout << "\nMerged array in ascending order : ";
    for(int i=0;i<k;i++)
    {
        std::cout << c[i] << " ";
    }
    for(int i=0;i<k-1;i++)
    {
        for(int j=0;j<k-i-1;j++)
        {
            if(c[j] < c[j+1])
            {
                temp = c[j];
                c[j] = c[j+1];
                c[j+1] = temp;
            }
        }
    }
    std::cout << "\nMerged array in descending order : ";
    for(int i=0;i<k;i++)
    {
        std::cout << c[i] << " ";
    }
    return 0;
}
