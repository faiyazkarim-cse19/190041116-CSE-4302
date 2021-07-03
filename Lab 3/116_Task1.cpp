#include <bits/stdc++.h>

using namespace std;

class RationalNumber
{
private:
    int numerator;
    int denominator;
public:
    void assign(int num, int denom)
    {
        numerator = num;
        if(denominator)
            denominator = denom;
        else
            cout<<"Error"<<endl;
    }

    double convert()
    {
        return (double)numerator/(double)denominator;
    }

    void invert()
    {
        if(!numerator)
            cout<<"Error"<<endl;
        else
            swap(numerator,denominator);
    }

    void print()
    {
        cout<<"The Rational Number is "<<numerator<<"/"<<denominator<<endl;
    }
};

int main()
{
    RationalNumber obj;
    obj.assign(3,2);
    obj.print();

    cout<<"Float calculation: "<<obj.convert()<<endl;
    obj.invert();
    obj.print();
    cout<<"Float calculation: "<<obj.convert()<<endl;
    return 0;
}

