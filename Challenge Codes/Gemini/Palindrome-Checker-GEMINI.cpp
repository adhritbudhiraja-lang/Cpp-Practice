#include <iostream>
#include <string>

int main()
{
    std::string word;
    std::cout << "Enter a word: ";
    std::cin >> word;

    bool isPalindrome = true;
    int len = word.length();

    for (int i = 0; i < len / 2; i++)
    {
        if (word[i] != word[len - 1 - i]) 
        {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) 
        std::cout << "Yes, it is a Palindrome.";
    else 
        std::cout << "No, it is not.";

    return 0;
}