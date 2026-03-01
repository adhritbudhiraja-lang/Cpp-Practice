#include <iostream> 
#include <vector>

int main()
{
    std::vector<int> v = {10, 20, 30};
    std::cout << "Size of v before deleting : " << v.size() << std::endl;
    std::cout << "Last element : " << v.back() << std::endl;
    v.pop_back();
    std::cout << "Size of v after deleting : " << v.size() << std::endl;
    std::cout << "Last element : " << v.back() << std::endl;
    return 0;
}
// v.back()  returns the last value in a vector