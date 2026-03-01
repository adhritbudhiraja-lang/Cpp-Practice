#include <iostream>

using namespace std;

int main()
{
    int num1,num2,sum;
    std::cout << "Enter two numbers : ";
    std::cin >> num1 >> num2;
    sum = num1 + num2;
    std::cout << "Sum of " << num1 << " & " << num2 << " is : " << sum;
    return 0;
}