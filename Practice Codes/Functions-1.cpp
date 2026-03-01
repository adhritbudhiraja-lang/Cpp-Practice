#include <iostream>

float calculateSum(float a, float b);  // Declare the function

int main()
{
    float a, b, sum;
    std::cout << "Ener first number : ";
    std::cin >> a;
    std::cout << "Enter second number :";
    std::cin >> b;
    sum = calculateSum(a, b); // Call the function 
    std::cout << "Sum : " << sum;
    return 0;
}

float calculateSum(float a, float b) 
{
    return a + b; // Define the function 
}