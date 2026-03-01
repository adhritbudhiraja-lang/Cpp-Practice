// WAP To overload + operator to add two complex numbers
#include <iostream>

class sum
{
    int x,y;
    public:
        sum()
        {

        }
        sum (int x,int y)
        {
            this->x=x;
            this->y=y;
        }
        void get()
        {
            std::cout << "Enter value of x : ";
            std::cin >> x;
            std::cout << "Enter value of y : ";
            std::cin >> y;
        }
        void print()
        {
            std::cout << "Real number : " << x << std::endl;
            ;
            if (y>=0)
            {
                std::cout << "Complex number entered : " << x << " + " << y << "i" << std::endl;
            }
            else 
            {
                std::cout << "Complex number entered : " << x << " - " << y  << "i" << std::endl;   
            }
        }
        sum operator + (sum s2)
        {
            sum s3;
            s3.x = x + s2.y;
            s3.y = y + s2.y;
            return s3;
        }
};
int main()
{
    sum s1,s2,s3;
    s1.get();
    s2.get();
    s3 = s2 + s1;
    s3.print();
    return 0;
}