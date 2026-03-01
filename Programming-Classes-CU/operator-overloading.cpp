#include <iostream> 

class demo
{
    int a;
    public:
        void get_data()
        {
            std::cout << "Enter value : ";
            std::cin >> a;
        }
        void print_data()
        {
            std::cout << "Value of a : " << a << std::endl;
        }
        demo operator + (demo d2)
        {
            demo d3;
            d3.a = a + d2.a;
            return d3;
        }
};
int main()
{
    demo d1,d2,d3;
    d1.get_data();
    d2.get_data();
    d3 = d2 + d1; 
    d1.print_data();
    d2.print_data();
    d3.print_data();
    return 0;
}