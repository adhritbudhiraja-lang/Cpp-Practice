#include <iostream>
#include <string>

int main()
{
    int opt;
    std::string word1,word2;
    std::cout << "Input specefic words into any one of these pre-written sentences : (Choose Only One) : \n";
    std::cout << "1) The [word1] inside the [word2].\n";
    std::cout << "2) The [word1] outside the [word2].\n";
    std::cout << "Enter your chosen option : ";
    std::cin >> opt;
    if (opt == 1) 
    {
        std::cout << "Enter [word1] : ";
        std::cin >> word1;
        std::cout << "Enter [word2] : ";
        std::cin >> word2;
        std::cout << "The " << word1 << " inside the " << word2;
    }
    else if (opt == 2)
    {
        std::cout << "Enter [word1] : ";
        std::cin >> word1;
        std::cout << "Enter [word2] : ";
        std::cin >> word2;
        std::cout << "The " << word1 << " outside the " << word2;
    }
    else
    {
        std::cout << "Invalid Option!";
    }
    return 0;
}