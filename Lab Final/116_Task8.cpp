#include <bits/stdc++.h>
using namespace std;

class RationalNumber
{
private:
    int p;
    int q;

public:

    RationalNumber(): p(1),q(1)
    {

    }

    RationalNumber(int num, int de): p(num)
    {
        if(q == 0)
        {
            cout<<"Wrong input for q!"<<endl;
            q = 1;
        }
        else
            q = de;
    }

    void showFraction()
    {
        cout<<p<<"/"<<q<<endl;
    }

    RationalNumber operator + (RationalNumber& R)
    {
     return RationalNumber(p*q + R.p*R.q , q * R.q);
    }

    RationalNumber operator - (RationalNumber& R)
    {
     return RationalNumber(p*q - R.p*R.q , q * R.q);
    }
};



int main()
{
    RationalNumber obj(1,2);
    RationalNumber obj1(1,2);

    RationalNumber obj2 = obj - obj1;
    obj2.showFraction();

    return 0;
}
