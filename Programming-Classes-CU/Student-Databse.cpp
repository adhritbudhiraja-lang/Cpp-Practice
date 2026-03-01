#include <iostream>
#include <vector>

int main()
{
    std::vector <int> v;
    int a,elm,n,ch,pos,val,del,upd,val1;
    bool l=true;
    std::cout << "Enter number of subjects : ";
    std::cin >> n;
    for(int i=0;i<n;i++)
    {
        std::cout << "Subject " << i+1 <<  " : ";
        std::cin >> elm;
        v.push_back(elm);
    }
    while(l)
    {
    std::cout << "\n" << std::endl;
    std::cout << "1)Display Marks\n2)Add More Marks\n3)Delete Marks\n4)Update Marks\n5)Exit" << std::endl;
    std::cout << "Enter choice : ";
    std::cin >> ch;
    std::cout << "\n" << std::endl;
    
        switch(ch)
        {
            case 1:
                {
                    std::cout << "Entered marks : ";
                    for(int i=0;i<=v.size();i++)
                    {
                        std::cout << "\t" << v[i];
                    }
                    break;
                }
            case 2:
                {
                    std::cout << "Enter position : ";
                    std::cin >> pos;
                    std::cout << "Enter value : ";
                    std::cin >> val;
                    v.insert(v.begin() + pos,val);
                    for(int i=0;i<=v.size();i++)
                    {
                        std::cout << v[i];
                    }
                    break;
                }
            case 3:
                {
                    std::cout << "Enter Position : ";
                    std::cin >> del;
                    v.erase(v.begin() + del);
                    for(int i=0;i<=v.size();i++)
                    {
                        std::cout << v[i];
                    }
                    break;
                }
            case 4:
                {
                    std::cout << "Enter position : ";
                    std::cin >> upd;
                    std::cout << "Enter value : ";
                    std::cin >> val1;
                    v[upd] = val1;
                    break;
                }
            case 5:
                {
                    l=false;
                    break;
                }
            default : 
                {
                    std::cout << "Error";
                    break;
                }
        }
    }
    return 0;
}