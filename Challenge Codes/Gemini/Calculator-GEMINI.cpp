#include <iostream>
#include <string>

int main()
{
    char op;
    float x, y;
    std::cout << "Enter first number (x)  : ";
    std::cin >> x;
    std::cout << "Enter second number (y) : ";
    std::cin >> y;
    std::cout << "Enter the operator (+,-,/,*,%): ";
    std::cin >> op;

    switch (op)
    {
    case '+':
        std::cout << "Sum of " << x << " & " << y << " = " << x + y;
        break;
    case '-':
        std::cout << "Subtraction of " << x << " & " << y << " = " << x - y;
        break;
    case '/':
        if (y != 0)
            std::cout << "Division (/) of " << x << " & " << y << " = " << x / y;
        else
            std::cout << "Error: Division by zero!";
        break;
    case '%':
        std::cout << "Remainder (%) of " << x << " & " << y << " = " << (int)x%(int)y ;
        break;
    case '*':
        std::cout << "Multiplication of " << x << " & " << y << " = " << x * y;
        break;
    default:
        std::cout << "Invalid operator!";
        break;
    }

    return 0;
}