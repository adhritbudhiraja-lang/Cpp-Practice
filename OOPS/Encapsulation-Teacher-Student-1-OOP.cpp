#include <iostream>
#include <string>
#include <chrono>
#include <thread>

void slowPrint(const std::string & text,int delay_ms);

void slowPrint(const std::string & text,int delay_ms)
{
    for (char c: text)
    {
        std::cout << c << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(delay_ms));
    }
}
class Student;
class Student
{
    friend class Teacher;
    
    
    private: 
        double tmarks;
        float marks,percentage,gpa;
    public:
        std::string name,section,course;
        Student () {};

    Student(double tm,float m, float perc, float g)
    {
        tmarks = tm;
        marks = m;
        percentage = perc;
        gpa = g;
    }
    
    void sdetails()
    {
        std::cout << "Enter Name : ";
        std::cin >> name;
        std::cout << "Enter Section : ";
        std::cin >> section;
        std::cout << "Enter course : ";
        std::cin >> course;
    }
    void sresult()
    {
        std::cout << "Total marks : " << tmarks << std::endl;
        std::cout << "Percentage : " << percentage << std::endl;
        std::cout << "GPA : " << gpa << std::endl;
    }
};
class Teacher
{
    private:
        std::string teacher_id,password;
    public: 
        std::string name,id;
    void tlogin()
    {
        std::cout << "Enter Teacher ID : ";
        std::cin >> teacher_id;
        std::cout << "Enter password : ";
        std::cin>> password;
    }
    void tstudent(Student &s)
    {
        int ts;
        std::cout << "Enter number of subjects : ";
        std::cin >> ts;
        if (ts<=0)
        {
            std::cout << "Invalid!";
        }
        else
        {   
            std::cout << "Enter student id : ";
            std::cin >> id;

            for (int i = 0;i<ts;i++)
            {
                std::cout << "Enter marks for subject " << i << " : ";
                std::cin >> s.marks;
                s.tmarks += s.marks;
            }
            std::cout << "Enter GPA : ";
            std::cin >> s.gpa;
            s.percentage = s.tmarks/ts;
        }
        
        
    }
};

int main()
{
    slowPrint("Loading Program................\n",300);
    Teacher t;
    Student s;

    int choice;
    bool chain = true;

    while(chain)
    {
    std::cout << "Login as : \n1)Teacher\n2)Student\n3)Exit\n";
    std::cin >> choice;

    switch(choice)
    {
        case 1:
            slowPrint("Loading............\n",200);
            std::cout << "Loading Complete" << std::endl;
            t.tlogin();
            std::cout << "\n\n" << std::endl;
            t.tstudent(s);
            break;
        case 2: 
            slowPrint("Loading............\n",200);
            std::cout << "Loading Complete" << std::endl;
            s.sdetails();
            std::cout << "\n\n" << std::endl;
            s.sresult();
            break;
        case 3: 
            slowPrint("Exiting............",150);
            std::cout << "Exited";
            chain = false;

    }
    }
    return 0;
}