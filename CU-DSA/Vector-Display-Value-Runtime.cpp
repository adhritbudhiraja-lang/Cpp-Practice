#include <iostream>
#include <vector>

int main()
{
    int n,elm,del;
    std::vector<int> v;
    std::cout << "Enter number of elements in vector : ";
    std::cin >> n;
    for(int i=0;i<n;i++)
    {
        std::cin >> elm;
        v.push_back(elm);
    }
    std::cout << "Using i loop : " << std::endl;
    for(int i=0;i<n;i++)
    {
        
        std::cout << v[i] << " ";
    }
    std::cout << "\nUsing x:s method : " << std::endl;
    for(int x:v)
    {
        
        std::cout << x << " ";
    }
    std::cout << "\nEnter number of elements to delete : ";
    std::cin >> del;
    if (del <= n)
    {
        for(int i=0;i<del;i++)
        {
            v.pop_back();
        }
        for(int i=0;i<n;i++)
        {
            std::cout << v[i] << " ";
        }
    }
    else
    {
        std::cout << "Invalid!";
    }
    
    return 0;
}