#include <bits/stdc++.h>

using namespace std;

class BankAccount
{
private:
    int account_number;
    string account_holder_name;
    string account_type;
    double current_balance;
    double minimum_balance;
public:
    BankAccount(int a_no, string name, string type, double bal, double min_bal)
    {
        account_number = a_no;
        account_holder_name = name;
        account_type = type;
        current_balance = bal;
        minimum_balance = min_bal;
    }

    void show_info()
    {
        cout<<"Account Number: "<<account_number<<endl;
        cout<<"Account Holder Name: "<<account_holder_name<<endl;
        cout<<"Account Type: "<<account_type<<endl;
        cout<<"Current Balance: "<<current_balance<<endl;
        cout<<"Minimum Balance: "<<minimum_balance<<endl;
    }

    void showBalance()
    {
        cout<<"Current Balance: "<<current_balance<<endl;
    }

    void deposit(double value)
    {
        current_balance += value;
    }

    void withdrawal(double value)
    {
        int temp = current_balance;
        temp -= value;

        if(temp < minimum_balance)
            cout<<"Cannot Withdraw!"<<endl;

        else
            current_balance -= value;
    }

    void giveInterst(double rate = 3)
    {
        double interest = (rate/100) * current_balance;
        double tax = 0.1 * interest;
        current_balance -= tax;
        current_balance += interest;
    }

    ~BankAccount()
    {
        cout<<"Account of Mr. "<<account_holder_name<<" with account no "<<account_number<<" is destroyed with a balance BDT "<<current_balance<<endl;
    }

};

int main()
{
    BankAccount obj(123, "John", "Savings", 20000, 10000);
    obj.show_info();
    obj.showBalance();
    obj.deposit(5000);
    obj.withdrawal(1000);
    obj.giveInterst();
    obj.showBalance();
    return 0;
}
