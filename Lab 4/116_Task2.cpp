#include <bits/stdc++.h>

using namespace std;

class Employee
{
private:
    string EmpName;
    int member_ID;
    int data_member_Age;
    float data_member_Salary;
public:
    void FeedInfo(string name, int ID, int age, float salary)
    {
        EmpName = name;
        member_ID = ID;
        data_member_Age = age;
        data_member_Salary = salary;
    }

    string getStatus()
    {
        string status;
        if(data_member_Age <= 25)
        {
            if(data_member_Salary > 20000)
            {
                status = "Moderate";
                return status;
            }
            else
            {
                status = "Low";
                return status;
            }
        }

        else
        {
            if(data_member_Salary <= 21000)
            {
                status = "Low";
                return status;
            }
            else if(data_member_Salary > 21000 && data_member_Salary <= 60000)
            {
                status = "Moderate";
                return status;
            }
            else if(data_member_Salary > 60000)
            {
                status = "High";
                return status;
            }
        }
    }

    void ShowInfo()
    {
        cout<<"Employee Name: "<<EmpName<<endl;
        cout<<"Member ID: "<<member_ID<<endl;
        cout<<"Member Age: "<<data_member_Age<<endl;
        cout<<"Member Salary: "<<data_member_Salary<<endl;
        string status = getStatus();
        cout<<"Status: "<<status<<endl;
    }

};

int main()
{
    Employee obj;
    obj.FeedInfo("Josh", 12, 21, 70000);
    obj.ShowInfo();
    return 0;
}
