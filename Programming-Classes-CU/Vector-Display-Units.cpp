//Create vector and display its units
#include <iostream>
#include <vector>

int main()
{
    int n,elm;
    std::vector <int> v;
    std::cout << "Enter number of elements : ";
    std::cin >> n;
    for (int i=0;i<n;i++)
    {
        std::cout << "v[" << i << "]";
        std::cin >> elm;
        v.push_back(elm); // Input in vector
    }
    std::cout << "\n" << std::endl;
    for (int i = 0;i<v.size();i++)
    {
        std::cout << " " << v[i];
    }
    return 0;
}