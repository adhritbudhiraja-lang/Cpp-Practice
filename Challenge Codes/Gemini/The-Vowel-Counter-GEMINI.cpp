#include <iostream>
#include <string>

int main()
{
    int i,count = 0;
    std::string word;
    std::cout << "Enter a word : ";
    std::cin >> word;
    for (i=0;i<word.length();i++)
    {
        if (word[i]=='a'||word[i]=='e'||word[i]=='i'||word[i]=='o'||word[i]=='u'||word[i]=='A'||word[i]=='E'||word[i]=='I'||word[i]=='O'||word[i]=='U')
        {
            count++;        
        }
    }
    std::cout << "Total Vowels : " << count;
    return 0;
}