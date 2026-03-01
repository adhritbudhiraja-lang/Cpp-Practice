#include <iostream>
#include <vector>

int main()
{
    std::vector <int> v;
    int n,elm,pos,val;
    std::cout << "Enter size of vector : ";
    std::cin >> n;
    for(int i=0;i<n;i++)
    {
        std::cin >> elm;
        v.push_back(elm);
    }
    std::cout << "Entered vector : \n" << std::endl;
    for(int i=0;i<n;i++)
    {
        std::cout << v[i] << " ";
    }
    std::cout << "\n";
    std::cout << "Enter postion of new element : ";
    std::cin >> pos;
    std::cout << "Enter value to insert : ";
    std::cin >> val;
    std::cout << "\n";
    v.insert(v.begin() + pos,val);
    std::cout << "\nUpdated Array : \n";
    for(int i=0;i<v.size();i++)
    {
        std::cout << v[i] << " ";
    }
    return 0;
}