#include <iostream>
#include <string>

int main()
{
    std::string word;
    std::cout << "Enter a message to encrypt : ";
    std::cin >> word;

    for (int i=0;i<word.length();i++)
    {
        word[i] = word[i] + 1;
    }

    std::cout << "Encrypted message : " << word ;
    return 0;
}