#include <bits/stdc++.h>

using namespace std;

class StudentResult
{
private:
    int subjectMark[6];
    bool fail;
    static int passingMark;
public:
    void displayMarks()
    {
        for(int i=0; i<6; i++)
        {
            cout<<subjectMark[i]<<" ";
            cout<<endl;
        }
    }

    void setMarks(int m1, int m2, int m3, int m4, int m5, int m6)
    {
        subjectMark[0] = m1;
        subjectMark[1] = m2;
        subjectMark[2] = m3;
        subjectMark[3] = m4;
        subjectMark[4] = m5;
        subjectMark[5] = m6;
    }

    void checkPassing()
    {
        fail = false;
        for(int i=0; i<6; i++)
        {
            if(subjectMark[i] < passingMark)
            {
                fail = true;
            }
        }

        if(!fail)
            cout<<"Passed!"<<endl;
        else
            cout<<"Failed!"<<endl;
    }

};

int StudentResult::passingMark = 50;

int main()
{
    StudentResult obj;
    obj.setMarks(10,60,70,80,90,70);
    obj.displayMarks();
    obj.checkPassing();
    return 0;
}
