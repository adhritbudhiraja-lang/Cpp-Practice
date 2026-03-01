#include <iostream>
#include <string>
#include <chrono>
#include <thread>

void slowPrint(const std::string & text, int delay_ms);

void slowPrint(const std::string & text, int delay_ms)
{
    for (char c : text)
    {
        std::cout << c << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(delay_ms));
    }
}
int main()
{
    slowPrint("Hello World",350);
    return 0;
}