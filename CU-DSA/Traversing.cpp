#include <iostream>
#include <vector>

int main() 
{
    std::vector<int> v = {10, 20, 30, 40, 50};
    std::cout << "Traversing the vector:\n";
    for (size_t i = 0; i < v.size(); i++) 
    {
        std::cout << "Element at index " << i << " is: " << v[i] << std::endl;
    }
    return 0;
}