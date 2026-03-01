#include <iostream>
#include <set>

int main()
{
    std::set<int> s;
    int n,elm,ch,val,last;
    bool l=true;
    std::cout << "Enter elements in set : ";
    std::cin >> n;
    for(int i=0;i<n;i++)
    {
        std::cin >> elm;
        s.insert(elm);
    }
    while(l)
    {
        std::cout << "\n1)Display Elements of set\n2)Clear set\n3)Return first element\n4)Return last element\n5)Delete element\n6)Total elements in set\n7)Exit\n" << std::endl;
        std::cout << "Enter choice : ";
        std::cin >> ch;
        switch(ch)
        {
            case 1:
                {
                    std::cout << "\nEntered Set : \n" << std::endl;
                    for(int x:s)
                    {
                        std::cout << x << " ";
                    }
                    break;
                }
            case 2:
                {
                    std::cout << "Set Cleared.";
                    s.clear();
                    break;
                }
            case 3:
                {
                    if(!s.empty())
                    {
                        for(int x:s)
                        {
                            std::cout << "Fisrt element : " << x << std::endl;
                            break;
                        }
                    }
                    break;
                }
            case 4:
                {
                    if(!s.empty())
                    {
                        for(int x:s)
                        {
                            last = x;
                        }
                        std::cout << "Last element : " << last << std::endl;
                    }
                    break;
                }
            case 5:
                {
                    std::cout << "Enter element to delete : ";
                    std::cin >> val;
                    s.erase(val);
                    break;
                }
            case 6:
                {
                    std::cout << "Total elements in set : " << s.size() << std::endl;
                    break;
                }
            case 7:
                {
                    l=false;
                    break;
                }
        }
    }
    return 0;
}