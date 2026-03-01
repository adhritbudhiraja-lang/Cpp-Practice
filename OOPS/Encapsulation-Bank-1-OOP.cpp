#include <iostream>
#include <string>
#include <chrono>
#include <thread>

void slowPrint(const std::string & text, int delay_ms);

void slowPrint(const std::string & text, int delay_ms)
{
    for (char c: text)
    {
        std::cout << c << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(delay_ms));
    }
}

class Bank
{
    private:
        std::string account_id,password,login_id;
        double balance;
    public:
        std::string username;
    void callpvt_acc_id(std::string ac)
    {
        account_id = ac;
    }
    void call_password(std::string pass)
    {
        password = pass;
    }
    void call_login(std::string login)
    {
        login_id = login;
    }
    void call_balance(double bal)
    {
        balance = bal;
    }
    Bank()
    {
        balance = 0.0;
    }
    Bank(std::string ac,std::string user,std::string login,std::string pass,double bal)
    {
        account_id = ac;
        username = user;
        login_id=login;
        password = pass;
        balance = bal;
    }
    void input()
    {
        std::cout << "Enter Login Id : ";
        std::cin >> login_id;
        std::cout << "Enter Account Id : ";
        std::cin >> account_id;
        std::cout << "Enter Username : ";
        std::cin >> username;
        std::cout << "Enter Password : ";
        std::cin >> password;
        std::cout << "Enter Balance : ";
        std::cin >> balance;
        
        
    }
    void display_1()
    {
        std::cout << "Login Id : " << login_id << std::endl << "Account Id : " << account_id << std::endl << "Username : " << username << std::endl << "Balance : " << balance << std::endl;
    }
    void add_bal(double add)
    {
        balance = balance + add;
    }
    void deduct_bal(double deduct)
    {
        if (balance < deduct)
        {
            std::cout << "Invalid!";
        }
        else
        {
            balance = balance - deduct;
        }
                
    }
};
int main()
{
    Bank b;
    int choice;
    double add,deduct;
    b.input();
    info:
    std::cout << "\n\n" << std::endl;
    std::cout << "Choose your option : ";
    std::cout << "\n";
    std::cout << "1) Add balance\n2) Deduct Balance\n3) View Account Details\n4)Exit\n";
    std::cout << "Choice : ";
    std::cin >> choice;
    
    switch(choice)
    {
        case 1:
            std::cout << "\n";
            std::cout << "Enter the amount to add : ";
            std::cin >> add;
            b.add_bal(add);
            goto info;
            break;
        case 2:
            std::cout << "\n";
            std::cout << "Enter the amount to deduct : ";
            std::cin >> deduct;
            b.deduct_bal(deduct);
            goto info;
            break;
        case 3: 
            std::cout << "\n";
            b.display_1();
            goto info;
            break;
        case 4: 
            std::cout << "Exiting";
            slowPrint(".......\n",100);
            std::cout << "Exited!";
            break;
        default:
            std::cout << "Invalid!";
            break;
    }

return 0;
}