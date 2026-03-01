#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v;
    int n, a;
    std::cout << "How many numbers? : ";
    std::cin >> n;

    // Input numbers into the vector
    for (int i = 0; i < n; i++)
    {
        std::cout << "Enter v[" << i << "] : ";
        std::cin >> a;
        v.push_back(a); // Add the input number to the vector
    }

    // Display the vector contents
    std::cout << "You entered: ";
    for (const int& num : v)
    {
        std::cout << num << " ";
    }

    return 0;
}