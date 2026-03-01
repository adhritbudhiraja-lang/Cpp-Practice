#include <iostream>

int main()
{
    int s1,s2,e1,e2,l1,l2,l,nt,t=3;
    std::cout << "Enter details of first meeting : " << std::endl;
    std::cout << "Start time of 1st meeting : ";
    std::cin >> s1;
    std::cout << "Enter end time 1st meeting : ";
    std::cin >> e2;
    std::cout << "Enter level of 1st meeting : ";
    std::cin >> l1;
    std::cout << std::endl;
    std::cout << "Enter details of second meeting : " << std::endl;
    std::cout << "Start time of 2nd meeting : ";
    std::cin >> s2;
    std::cout << "Enter end time 2nd meeting : ";
    std::cin >> e2;
    std::cout << "Enter level of 2nd meeting : ";
    std::cin >> l2;
    std::cout << std::endl;
    if(l1==l2)
    {
        if(e1<=s2)
        {
            std::cout << "You can attend." << std::endl;
        }
        else if(e1>s2) 
        {
            std::cout << "You cannot attend." << std::endl;
        }
    }
    else if(l2!=l1)
    {
        if(l2>l1)
        {
            l=l2-l1;
        }
        else
        {
            l=l1-l2;
        }
        nt=l*t;
        if(nt>e2)
        {
            std::cout << "You cannot attend.";
        }
        else if(nt<e2)
        {
            std::cout << "You cannot attend.";
        }
    }
    else
    {
        std::cout << "Error";
    }
    
    return 0;    
}