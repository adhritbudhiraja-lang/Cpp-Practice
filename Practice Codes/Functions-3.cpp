#include <iostream>
#include <cmath>

#define pi 3.14

float rectangle(float a,float b);
float square(float a);
float triangle(float a, float b);
float circle(float a);

float rectangle(float a,float b)
{
    std::cout << "Enter length : ";
    std::cin >> a;
    std::cout << "Enter breadth : ";
    std::cin >> b;
    std::cout << "Area of reactangle : " << a*b << std::endl;
    std::cout << "Perimeter of recatagle : " << 2*(a+b) << std::endl;
    return 0;
}

float square(float a)
{
    std::cout << "Enter length of side : ";
    std::cin >> a;
    std::cout << "Area of square : " << a*a << std::endl;
    std::cout << "Perimeter of square : " << 4*a << std::endl;
    return 0;
}

float triangle(float a,float b)
{
    float s1,s2,s3;
    std::cout << "Enter length of base : ";
    std::cin >> a;
    std::cout << "Enter height : ";
    std::cin >> b;
    std::cout << "Enter lenght of sides (s1,s2,s3) : ";
    std::cin >> s1 >> s2 >> s3;
    std::cout << "Area Of triangle : " << 0.5 *(a * b) << std::endl;
    std::cout << "Perimeter of triangle : " << s1 + s2 + s3 << std::endl;
    return 0;
}

float circle(float a)
{
    std::cout << "Enter value of radius : ";
    std::cin >> a;
    std::cout << "Area of circle : " << pi*pow(a,2) << std::endl;
    std::cout << "Circumfrence : " << pi*a*2 << std::endl;
    return 0;
}
int main()
{
    float a,b;
    int n;
    std::cout << "Dimension Calculator for 2D Shapes " << std::endl;
    std::cout << "1) Rectangle \n2) Square \n3) Triangle \n4) Circle" << std::endl;
    std::cout << "Which shape do you want to use : ";
    std::cin >> n;
    switch (n)
    {
        case 1:
            rectangle(a,b);
        break;

        case 2:
            square(a);
        break;
        
        case 3:
            triangle(a,b);
        break;

        case 4:
            circle(a);
        break;

        default :  
            std::cout << "Error";
        break;
    }
    
    return 0;
}