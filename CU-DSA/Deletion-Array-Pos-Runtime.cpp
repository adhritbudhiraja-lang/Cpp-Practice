#include <iostream>
#include <vector>

int main()
{
    int n,elm,pos;
    std::vector <int> v;
    std::cout << "Enter number of elemnts : ";
    std::cin >> n; 
    for(int i=0;i<n;i++)
    {
        std::cin >> elm;
        v.push_back(elm);
    }
    std::cout << "\nEntered array : ";
    for(int i=0;i<n;i++)
    {
        std::cout << v[i] << " ";
    }
    std::cout << "\nEnter position to delete : ";
    std::cin >> pos;
    std::cout << "\n";
    v.erase(v.begin() + (pos - 1));
    std::cout << "\nUpdated Array : \n";
    for(int i=0;i<v.size();i++)
    {
        std::cout << v[i] << " ";
    }
    return 0;
}