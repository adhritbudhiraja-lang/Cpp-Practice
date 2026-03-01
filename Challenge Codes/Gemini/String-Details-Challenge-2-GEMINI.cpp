#include <iostream>
#include <string>

int main()
{
    std::string word;

    std::cout << "Enter a word : ";
    std::cin >> word;
    std::cout << "Length of the word : " << word.length();
    std::cout << "\nFirst Letter : " << word[0];
    std::cout << "\nLast Letter : " << word[word.length() - 1];
    return 0;
}