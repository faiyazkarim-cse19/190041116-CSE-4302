#include<bits/stdc++.h>

using namespace std;

class Count
{
private:
    int count;
    int val;
    /*Count(Count& c):val(10) //Copy Initialization
    {
        count = c.count;
    }

    Count operator = (const Count& c) //Assignment Operator
    {
        count = c.count;
        return *this;
    }*/



public:
    Count():count(0), val(0)
    {

    }

    Count(int c, int v):count(c), val(v)
    {

    }

    Count(Count& c):val(10) //Copy Initialization
    {
        count = c.count;
    }

    Count operator = (const Count& c) //Assignment Operator
    {
        count = c.count;
        return *this;
    }

    void display()
    {
        cout<<"Count: "<<count<<" Value: "<<val<<endl;
    }

};

int main()
{
    Count c1, c2(6,2);
    c1.display();
    c2.display();
    c1 = c2;
    c1.display();
    Count c3 = c2;
    c3.display();
    return 0;
}
