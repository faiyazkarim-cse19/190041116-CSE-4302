#include <bits/stdc++.h>

using namespace std;

class Medicine
{
private:
    string name;
    string genericName;
    double discountPercent;
    double unitPrice;
public:
    void assignName(string na, string gen_na)
    {
        name = na;
        genericName = gen_na;
    }

    double assignPrice(double price)
    {
        if(price>=0)
            unitPrice = price;
        else
            cout<<"Error"<<endl;
    }

    void setDiscountPercent(double percent)
    {
        if(percent<=45)
            discountPercent = percent/100;
        else
            cout<<"Error"<<endl;
    }

    double getSellingPrice(int nos)
    {
         double total_price = (double)nos * unitPrice;
         double total_discount = discountPercent * total_price;
         return total_price - total_discount;
    }

    void display()
    {
        cout<<name<<"("<<genericName<<")"<<" has a unit price BDT "<<unitPrice<<" Current discount "<<discountPercent*100<<"%."<<endl;
    }


};

int main()
{
    Medicine obj;
    obj.assignName("Napa", "Paracetemol");
    obj.assignPrice(100);
    obj.setDiscountPercent(45);
    cout<<obj.getSellingPrice(10)<<endl;
    obj.display();
    return 0;
}

