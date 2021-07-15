#include<bits/stdc++.h>

using namespace std;

class rationalnumber
{
private:
    int numerator;
    int denominator;

    void error()
    {
        if (denominator == 0)
        {
            cout<<"Error! Denominator cannot be 0!"<<endl;
            numerator = 0;
            denominator = 0;
        }
    }

public:

    rationalnumber(int num, int denom)
    {
        numerator = num;
        denominator = denom;
    }

    rationalnumber()
    {};

    int get_numerator()
    {
        return numerator;
    }

    int get_denominator()
    {
        return denominator;
    }

    void set_numerator(int num)
    {
        numerator = num;
    }

    void set_denominator(int denom)
    {
        if(denom == 0)
            error();
        else
            denominator = denom;
    }

    double convert()
    {
        return (double)numerator/(double)denominator;
    }

    rationalnumber operator +(rationalnumber c2)
    {
        return rationalnumber(numerator * c2.denominator + c2.numerator * denominator, denominator * c2.denominator);
    }

    rationalnumber operator -(rationalnumber c2)
    {
        return rationalnumber(numerator * c2.denominator - c2.numerator * denominator, denominator * c2.denominator);
    }

    rationalnumber operator *(rationalnumber c2)
    {
        return rationalnumber(numerator * c2.numerator, denominator * c2.denominator);
    }

    rationalnumber operator /(rationalnumber c2)
    {
        return rationalnumber(numerator * c2.denominator, denominator * c2.numerator);
    }

    ~rationalnumber()
    {};
};



int main()
{
    rationalnumber obj(5, 2), obj2, obj3(0, 0);
    double ans = obj.convert();
    cout<<ans<<endl;

    obj2.set_numerator(5);
    obj2.set_denominator(2);

    obj3 = obj * obj2;
    cout<<obj3.get_numerator()<<endl<<obj3.get_denominator()<<endl;

    obj3 = obj / obj2;
    cout<<obj3.get_numerator()<<endl<<obj3.get_denominator()<<endl;

    obj3 = obj - obj2;
    cout<<obj3.get_numerator()<<endl<<obj3.get_denominator()<<endl;

    obj3 = obj + obj2;
    cout<<obj3.get_numerator()<<endl<<obj3.get_denominator()<<endl;

    return 0;
}
