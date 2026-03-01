#include <iostream>

void Swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int main()
{
    int a,b,temp;
    std::cout << "Enter fist number (a) : ";
    std::cin >> a;
    std::cout << "Enter second number (b) : ";
    std::cin >> b;
    std::cout << "\nNumbers before Swap :\na : " << a << "\nb : " << b << std::endl;
    Swap(a,b);
    std::cout << "\nNumbers after Swap :\na : " << a << "\nb : " << b << std::endl;
    return 0;
}