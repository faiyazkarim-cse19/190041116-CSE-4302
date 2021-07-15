#include<bits/stdc++.h>

using namespace std;

class Counter
{
private:
    int step;
    int count;
public:
    Counter(): count(0), step(1)
    {};
    Counter(int ct): count(ct), step(1)
    {};

    void setIncrementStep(int step_val)
    {
        if(step_val < 0)
        {
            cout<<"Wrong input!";
            step = 1;
            return;
        }
        step = step_val;
    }

    int getCount()
    {
        return count;
    }

    void increment()
    {
        count += step;
    }

    void resetCount()
    {
        count = 0;
    }

    Counter operator +(Counter& ob)
    {
        return Counter(count + ob.count);
    }

    Counter operator +(int var)
    {
        return Counter(count + var);
    }

    Counter operator ++()
    {
    return Counter(++count);
    }

    Counter operator ++(int)
    {
    return Counter(count++);
    }

    void operator +=(Counter ob)
    {
        count += ob.count;
    }

    friend Counter operator +(int left, Counter& right);

    ~Counter()
    {};

};

Counter operator +(int left, Counter& right)
{
    return Counter(left + right.count);
}

int main()
{
    Counter c1,c2(4),c3(3);

    cout<<c3.getCount()<<endl;

    int var = 5;
    c1 = c2 + var;
    c1 = var + c2;
    cout<<c1.getCount()<<endl;

    cout<<(++c3).getCount()<<endl;
    cout<<(c3++).getCount()<<endl;

    c1 += c3;
    cout<<c1.getCount()<<endl;

    return 0;
}
