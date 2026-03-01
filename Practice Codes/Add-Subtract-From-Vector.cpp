#include <iostream>
#include <vector>

int main()
{
    int n, a;
    std::vector<int> v;
    std::cout << "Enter number of digits: ";
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::cout << "v[" << i << "]: ";
        std::cin >> a;
        v.push_back(a);
    }

    std::cout << "Entered Vector: ";
    for (int i = 0; i < n; i++)
    {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;

    int choice, value;
    std::cout << "Enter 1 to add an element, 2 to subtract an element: ";
    std::cin >> choice;

    if (choice == 1)
    {
        std::cout << "Enter value to add: ";
        std::cin >> value;
        v.push_back(value);
    }
    else if (choice == 2)
    {
        if (!v.empty()) // !v.empty() checks if vector is empty or not
        {
            v.pop_back();
        }
    }

    std::cout << "Updated Vector: ";
    for (int i = 0; i < v.size(); i++)
    {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}