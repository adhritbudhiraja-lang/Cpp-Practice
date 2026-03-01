#include <iostream>
#include <string>
#include <vector>

class Student_Sections
{
    private :
        std::string UID;
    public : 
        int section;
        std::string name;

    Student_Sections(std::string n,std::string uid, int s)
    {
        name = n;
        section = s;
        UID = uid;
    }
    
};
int main()
{
    std::vector<std::string> n;
    std::vector<std::string> uid;
    std::vector<int> s;

    std::string name, uid_input;
    int section;
    int ts,i;
    std::cout << "Enter total number of students : ";
    std::cin >> ts;

    for(i = 0; i < ts;i++)   
    {
        std::cout << "Enter name : ";
        std::cin >> name;
        std::cout << "Enter UID : ";
        std::cin >> uid_input;
        std::cout << "Enter Section : ";
        std::cin >> section;
        n.push_back(name);
        uid.push_back(uid_input);
        s.push_back(section);
    }
    for (i=0;i<ts;i++)
    {
        std::cout << " Name : " << n[i] << std::endl;
        std::cout << "UID : " << uid[i] << std::endl;
        std::cout << "Section : " << s[i] << std::endl;
    }
}