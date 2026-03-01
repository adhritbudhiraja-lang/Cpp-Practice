#include <iostream>

float sum(float a,float b);
float div(float a,float b);
float mult(float a,float b);
float sub(float a,float b);
float perc(float a,float b);

int main()
{
    float a,b;
    char op;
    std::cout << "This is a 2 number calculator using functions : " << std::endl;
    std::cout << "Enter First number : ";
    std::cin >> a;
    std::cout << "Enter Second number : ";
    std::cin >> b;
    std::cout << "Enter operator (+,-,/,*,%) : ";
    std::cin >> op;

    switch (op)
    {
    case '+':
        sum(a,b);
        break;
    case '-':
        sub(a,b);
        break;
    case '/':
        div(a,b);
        break;
    case '%':
        perc(a,b);
        break;
    case '*':
        mult(a,b);
        break;
    default:
        break;
    }
    return 0;
}
float sum(float a,float b)
{
    std::cout << "Sum of " << a << " & " << b << " : " << a + b; 
    return a+b;
}
float div(float a,float b)
{
    if (b==0)
    {
        std::cout << "Denomenator cannot be zero!";
    }
    else 
    {
        std::cout << "Division of " << a << " & " << b << " : " << a/b;
    }
    return a/b;
}
float sub(float a, float b)
{
    std::cout << "Subtraction of " << a << " & " << b << " : " << a - b;
    return a - b;
}
float mult(float a,float b)
{
    std::cout << "Multilpication of " << a << " & " << b << " : " << a*b;
    return a*b;
}
float perc(float a,float b)
{
    if (b==0)
    {
        std::cout << "Denomenator cannot be zero!";
    }
    else 
    {
        std::cout << "Remainder of " << a << " & " << b << " : " << (int)a % (int)b;
    }
    return (int)a % (int)b;
}