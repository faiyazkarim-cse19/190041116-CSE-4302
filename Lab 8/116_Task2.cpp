#include<bits/stdc++.h>

using namespace std;

class Seat
{
private:
    string comfortability;
    bool seat_warmer;

public:
    Seat()
    {

    }

    Seat(string com, bool seat): comfortability(com), seat_warmer(seat)
    {

    }

    void setComfortability(string com)
    {
        comfortability = com;
    }

    void setSeat(bool seat)
    {
        seat_warmer = seat;
    }

    string getComfortability()
    {
        return comfortability;
    }

    bool getSeat()
    {
        return seat_warmer;
    }
};

class Wheel
{
private:
    double circumference;

public:
    Wheel()
    {

    }

    Wheel(double cir): circumference(cir)
    {

    }

    void setCircumference(double cir)
    {
        circumference = cir;
    }

    double getCircumference()
    {
        return circumference;
    }
};

class Engine
{
private:
    int consumption_rate;
    int production_rate;
    int Average_RPM;

public:
    Engine()
    {

    }

    Engine(int fuel, int energy, int RPM): consumption_rate(fuel), production_rate(energy), Average_RPM(RPM)
    {

    }

    void setFuel(int fuel)
    {
        consumption_rate = fuel;
    }

    void setEnergy(int energy)
    {
        production_rate = energy;
    }

    void setRPM(int RPM)
    {
        Average_RPM = RPM;
    }

    int getFuel()
    {
        return consumption_rate;
    }

    int getEnergy()
    {
        return production_rate;
    }

    int getRPM()
    {
        return Average_RPM;
    }
};

class Door
{
private:
    string opening_mode;

public:
    Door()
    {

    }


    Door(string mode): opening_mode(mode)
    {

    }

    void setMode(string mode)
    {
        opening_mode = mode;
    }

    string getMode()
    {
        return opening_mode;
    }
};

class Car: public Seat, public Wheel, public Engine, public Door
{
private:
    int maximum_acceleration;
    int fuel_capacity;

public:
    Car(int max_a, int fuel_cap): Seat(), Wheel(), Engine(), Door(), maximum_acceleration(max_a), fuel_capacity(fuel_cap)
    {

    }

    Car(int max_a, int fuel_cap, string com, bool seat, double cir, int fuel, int energy, int RPM, string mode)
    : Seat(com, seat), Wheel(cir), Engine(fuel, energy, RPM), Door(mode), maximum_acceleration(max_a), fuel_capacity(fuel_cap)
    {

    }

    void setAcceleration(int max_a)
    {
        maximum_acceleration = max_a;
    }

    void setCapacity(int fuel_cap)
    {
        fuel_capacity = fuel_cap;
    }

    int getAcceleration()
    {
        return maximum_acceleration;
    }

    int getCapacity()
    {
        return fuel_capacity;
    }

    void display()
    {
        cout<<"Maximum Acceleration: "<<getAcceleration()<<"\nFuel Capacity: "<<getCapacity()<<"\nSeat Comfortability: "<<getComfortability()<<"\n";
        cout<<"Seat Warmer Presence: " <<getSeat()<<"\nWheel Circumference: "<< getCircumference()<<"\nMaximum Fuel Consumption Rate: "<<getFuel()<<"\n";
        cout<<"Maximum Energy Production Rate: "<< getEnergy()<<"\nAverage RPM: " <<getRPM()<<"\nDoor Opening Mode: "<<getMode()<<"\n";
    }
};


int main()
{
    Car obj(100, 2000, "Comfy", true, 22.5, 400, 1000, 3000, "Sideways");
    obj.setEnergy(3500);
    obj.setComfortability("Pleasant");
    obj.display();

    return 0;
}
