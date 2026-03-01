#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v;
    int n,elm,val;
    std::cout << "Enter size or vector : ";
    std::cin >> n;
    std::cout << "Enter elements : ";
    for(int i=0;i<n;i++)
    {
        std::cin >> elm;
        v.push_back(elm);
    }
    std::cout << "\nEntered vector : \n";
    for(int i=0;i<n;i++)
    {
        std::cout << v[i] << " ";
    }
    std::cout << "\nEnter value to delete : ";
    std::cin >> val;
    std::cout << "\n" << std::endl;
    for(int i=0;i<n;i++)
    {
        if(val == v[i])
        {
            v.erase(v.begin() + i);
        }
    }
    std::cout << "\nUpdated Array : \n" << std::endl;
    for(int i=0;i<v.size();i++)
    {
        std::cout << v[i] << " ";
    }
    return 0;
}