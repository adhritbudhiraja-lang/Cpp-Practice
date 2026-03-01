#include <iostream>

class Shapes
{
    public:
    void area(int h,int c)
    {
        std::cout << "Area of triangle : " << 0.5*h*c << std::endl;
    }
    void area(double l,double b)
    {
        std::cout << "Area of rectangle : " << l*b << std::endl;
    }
    void area(float r)
    {
        std::cout << "Area of circle : " << 3.14*r*r << std::endl;
    }
};

int main()
{
    Shapes s;
    s.area(3.3);
    s.area(23.34,32.56);
    s.area(34,45);
    return 0;
}