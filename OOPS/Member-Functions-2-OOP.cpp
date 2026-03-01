#include <iostream>
#include <string>

class Student_Name
{
    friend class Student_Marks;
    private :
        std::string StdName;
    public :
        void input()
        {
            std::cout << "Enter name of student : ";
            std::cin >> StdName;
        }
        
};
class Student_Marks
{
    private :
        int marks;
    public : 
        void input()
        {
            std::cout << "Enter Marks : ";
            std::cin >> marks;
        }
        void display(const Student_Name &sn)
        {
            std::cout << "Marks scored by " << sn.StdName << " : " << marks;
        }
};

int main()
{   
    Student_Marks sm;
    Student_Name sn;
    
    sn.input();
    sm.input();
    sm.display(sn);
    return 0;
}