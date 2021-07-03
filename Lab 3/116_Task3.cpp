#include <bits/stdc++.h>

using namespace std;

class Time
{
private:
    int hour;
    int minute;
    int second;
public:

    int hours()
    {
        return hour;
    }

    int minutes()
    {
        return minute;
    }

    int seconds()
    {
        return second;
    }

    void reset(int h,int m, int s)
    {
      hour = h;
      minute = m;
      second = s;
    }

    void advance(int h,int m, int s)
    {
        second = second + s;

        if(second > 59)
        {
            minute++;
            second %= 60;
        }

        minute = minute + m;

        if(minute > 59)
        {
            hour++;
            minute %= 60;
        }

        hour = hour + h;
        if(hour >= 24)
        {
            hour %= 24;
        }

    }

    void print()
    {
        cout<<hour<<" : "<<minute<<" : "<<second<<endl;
    }

};

int main()
{
    Time obj;
    obj.reset(12,20,50);
    cout<<obj.hours()<<endl;
    cout<<obj.minutes()<<endl;
    cout<<obj.seconds()<<endl;
    obj.advance(1,20,5);
    obj.print();
    return 0;
}

