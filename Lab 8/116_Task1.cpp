#include<bits/stdc++.h>

using namespace std;

class Animal
{
private:
    string nameOfAnimal;
    string habitat_area;
    string sound;
    int weight;
    int height;
    int birthYear;

public:
    Animal(): nameOfAnimal("Tiger"), habitat_area("Grassland"), sound("Roar"), weight(80), height(20), birthYear(2021)
    {

    }

    Animal(string name, string hab, string so, int w, int h, int by)
    {
        nameOfAnimal = name;
        habitat_area = hab;
        sound = so;
        weight = w;
        height = h;
        birthYear = by;
    }

    Animal(string so): sound(so), birthYear(2021)
    {

    }

    void setName(string name)
    {
        nameOfAnimal = name;
    }

    void setHabitat(string hab)
    {
        habitat_area = hab;
    }

    void setSound(string so)
    {
        sound = so;
    }

    void setWeight(int w)
    {
        weight = w;
    }

    void setHeight(int h)
    {
        height = h;
    }

    void setBirthyear(int by)
    {
        if(by > 2021)
        {
            birthYear = 2021;
            cout<<"Wrong year given! Default value used."<<endl;
        }
        else
            birthYear = by;
    }

    string getName()
    {
        return nameOfAnimal;
    }

    string getHabitat()
    {
        return habitat_area;
    }

    string getSound()
    {
        return sound;
    }

    int getWeight()
    {
        return weight;
    }

    int getHeight()
    {
        return height;
    }

    int getBirthyear()
    {
        return birthYear;
    }

    int getAge()
    {
        return 2021 - birthYear;
    }

    void getInformation()
    {
        cout<<"Name: "<<getName()<<"\nHabitat: "<<getHabitat()<<"\nSound: "<<getSound()<<"\nWeight: "<<getWeight()<<"\n";
        cout<<"Height: "<<getHeight()<<"\nBirth Year: "<<getBirthyear()<<"\nAge: "<<getAge()<<"\n";
    }

    void changeWeight(int pounds)
    {
        weight = pounds;
    }

    void vocalize()
    {
        cout<<sound;
    }

};

class Cow : public Animal
{
private:
public:
    Cow(): Animal("moo")
    {

    }

    Cow(string name, string hab, string so, int w, int h, int by): Animal(name, hab, so, w, h, by)
    {

    }

};

class Chicken : public Animal
{
private:
public:
    Chicken(): Animal("buck buck")
    {

    }

    Chicken(string name, string hab, string so, int w, int h, int by): Animal(name, hab, so, w, h, by)
    {

    }
};

class Cat : public Animal
{
private:
public:
    Cat(): Animal("meow")
    {

    }

    Cat(string name, string hab, string so, int w, int h, int by): Animal(name, hab, so, w, h, by)
    {

    }
};


int main()
{
    Animal obj;
    Cow obj1;
    Chicken obj2;
    Cat obj3;

    obj.setName("Lion");
    obj.setHabitat("Rain forest");
    obj.setSound("Roar");
    obj.setWeight(80);
    obj.setBirthyear(2000);
    obj.setHeight(170);
    obj.changeWeight(90);
    obj.getInformation();
    obj.vocalize();
    cout<<endl;

    obj1.setName("Cow");
    obj1.setHabitat("Grassland");
    obj1.setWeight(180);
    obj1.setHeight(170);

    obj2.setName("Chicken");
    obj2.setHabitat("Grassland");
    obj2.setWeight(20);
    obj2.setHeight(30);

    obj3.setName("Cat");
    obj3.setHabitat("Grassland");
    obj3.setWeight(20);
    obj3.setHeight(15);

    cout<<endl;
    obj1.getInformation();
    cout<<endl;
    obj2.getInformation();
    cout<<endl;
    obj3.getInformation();
    cout<<endl;

    return 0;
}
