#include <bits/stdc++.h>
using namespace std;

class Account
{
private:
    int accountNo;
    int balance;

public:

    Account(): accountNo(0),balance(0)
    {

    }

    Account(int no, int bal): accountNo(no), balance(bal)
    {

    }

    void withdraw(int val)
    {
        if(val <= balance)
            balance -= val;
    }

    void deposit(int val)
    {
        balance += val;
    }

    void setAcc(int val)
    {
        accountNo = val;
    }

    void setBal(int val)
    {
        balance = val;
    }


};

class SavingsAccount : public Account
{
private:
    int savings;
public:
    SavingsAccount(): savings(0)
    {
        setAcc(0);
        setBal(0);
    }

    SavingsAccount(int no, int bal, int sav): savings(sav)
    {
        setAcc(no);
        setBal(bal);
    }

    void showSavings()
    {
        cout<<"Savings Account: "<<savings<<endl;
    }
};

class LoanAccount : public Account
{
private:
    int loan;
public:
    LoanAccount(): loan(0)
    {
        setAcc(0);
        setBal(0);
    }

    LoanAccount(int no, int bal, int lo): loan(lo)
    {
        setAcc(no);
        setBal(bal);
    }

    void showLoan()
    {
        cout<<"Loan Taken: "<<loan<<endl;
    }
};

int main()
{
    LoanAccount obj(1, 10 , 100);
    SavingsAccount obj1(2, 20, 300);
    obj.showLoan();
    obj1.showSavings();
    return 0;
}
