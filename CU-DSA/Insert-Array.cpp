#include <iostream>
#include <vector>

int main()
{
    std::vector <int> v = {1,2,3,4,5,6,7,8,9,10};
    int pos,val,i;
    for(size_t i=0;i<v.size();i++)
    {
        std::cout << v[i] << " \t";
    }
    std::cout << "\n";
    std::cout << "Enter position to insert : ";
    std::cin >> pos;
    std::cout << "Enter value to insert : ";
    std::cin >> val;
    v.insert(v.begin()+pos,val);
    for(int x : v)
    {
        std::cout << x << " \t";
    }
    return 0;
}