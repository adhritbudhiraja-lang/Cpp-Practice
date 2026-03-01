#include <iostream> 
#include <chrono>
#include <thread>
#include <string>

/* Syntax for slow printing function
void slowPrint(const std::string& text, int delay_ms)
{
    for (char c: text) // for every char c in text string
    {
        std::cout << c << std::flush;   
        std::this_thread::sleep_for(std::chrono::units(duration));
        [std::cout << c prints every character c, std::flush clears the output buffer]
    }
}
*/
void slowPrint(const std::string & text, int delay_ms);

void slowPrint(const std::string & text, int delay_ms)
{
    for (char c: text)
    {
        std::cout << c << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(delay_ms));
    }
}
int main()
{
    slowPrint("This sentence is printing slowly",50);
    return 0;
}