#include <iostream>

class Bank
{
    private:
        std::string acc_id,password;
        long long amt;
    public:
        std::string acc_name;
    Bank()
    {

    }
    Bank(std::string acc_id,std::string password,long long amt,std::string acc_name)
    {
        this->acc_id=acc_id;
        this->password=password;
        this->amt=amt;
        this->acc_name=acc_name;
    }
    void get()
    {
        std::cout << "Enter holder name : ";
        std::cin >> acc_name;
        std::cout << "Enter account id : ";
        std::cin >> acc_id;
        std::cout << "Enter password : ";
        std::cin >> password;
        std::cout << "Enter amount : ";
        std::cin >> amt;
        if(amt<0)
        {
            std::cout << "Balance cannot be less than 0!";
        }
        std::cout << "\n";
    }
    void display()
    {
        std::cout << "\nAccount holder name : " << acc_name << "\nAccount balance : " << amt << std::endl;
        std::cout << "\n";
    }
    void pdetails()
    {
        std::cout << "\nAccount ID : " << acc_id << "\nPassword : " << password << std::endl; 
    }
    void add()
    {
        long long add;
        std::cout << "Enter amount to add : ";
        std::cin >> add;
        amt = amt + add;
        std::cout << "\n";
    }
    void withdraw()
    {
        long long dec;
        std::cout << "Enter amount to withdraw : ";
        std::cin >> dec;
        std::cout << "\n";
        if(dec>amt)
        {
            std::cout << "Insufficient Funds";
        }
        else
        {
            amt = amt = dec;
        }
        
    }
};
int main()
{
    int ch;
    Bank b;
    int z=0;
    while(z==0)
    {
        std::cout << "\n\n";
        std::cout << "1)Enter Details\n2)View Details\n3)View Private Details\n4)Add Amount\n5)Withdraw amount\n6)Exit" << std::endl;
        std::cout << "\n";
        std::cout << "Enter choice : ";
        std::cin >> ch;

        switch(ch)
        {
            case 1:
            {
                b.get();
                std::cout << "\n";
                break;
            }
            case 2:
            {
                b.display();
                std::cout << "\n";
                break;
            }
            case 3:
            {
                b.pdetails();
                std::cout << "\n";
                break;
            }
            case 4:
            {
                b.add();
                std::cout << "\n";
                break;
            }
            case 5:
            {
                b.withdraw();
                std::cout << "\n";
                break;
            }
            case 6:
            {
                z=1;
                std::cout << "\n";
                break;
            }
        }
    }
    return 0;
}