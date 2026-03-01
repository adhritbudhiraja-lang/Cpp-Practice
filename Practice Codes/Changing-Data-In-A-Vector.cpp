#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v = {1, 2, 3};
    std::cout << "Array before change: ";
    for (const int& num : v) 
    {
        std::cout << num << " ";
    }
    std::cout << "\n";
    v[1] = 879; // replaces the previous value to 879
    std::cout << "Array after changes: ";
    for (const int& num : v) 
    {
        std::cout << num << " ";
    }
    std::cout << "\n";
    return 0;
}
