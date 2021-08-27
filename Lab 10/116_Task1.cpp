#include<bits/stdc++.h>

using namespace std;

class Shape1
{
private:

public:
    Shape1()
    {

    }

    virtual string description() //Virtual function
    {
      return "Shape!";
    }
};

class Circle1 : public Shape1
{
private:

public:
    Circle1()
    {

    }

    string description()
    {
        return "Circle!";
    }

};

class Shape
{
private:

public:
    Shape()
    {

    }

    virtual string description() = 0; //Pure virtual function
};

class Circle : public Shape
{
private:

public:
    Circle()
    {

    }

    string description()
    {
        return "Circle!";
    }

};


int main()
{
    Shape* s;
    Shape1* s1;

    s = new Circle();
    s1 = new Circle1();

    cout<<s->description()<<endl;
    cout<<s1->description()<<endl;

    delete s;
    delete s1;
    return 0;
}
