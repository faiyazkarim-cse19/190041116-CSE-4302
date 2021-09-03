#include <bits/stdc++.h>

using namespace std;

enum class Material {Wood,Board,Steel,foam};
class Furniture
{
protected:
    double price;
    double discount;
    Material madeof;
    string product_name;
public:
    Furniture()
    { }
    Furniture(double p,double d,Material m, string name):price(0),discount(0),madeof(Material::Wood), product_name("")
    {
        setPrice(p);
        setDiscount(d);
        setMadeof(m);
        setProductName(name);
    }

    void setPrice(double val)
    {
        if(val > 0)
            price = val;
    }

    void setDiscount(double val)
    {
        if(val <= price)
            discount=val;
    }

    void setDiscountPercentage(double val)
    {
        if(val > 0)
            discount = val/100 * price;
    }

    void setMadeof(Material val)
    {
        madeof=val;
    }

    void setProductName(string name)
    {
        product_name = name;
    }

    string getMadeof()
    {
        if(madeof==Material::Wood)
            return string("Wood");

        else if(madeof==Material::Board)
            return string("Board");

        else if(madeof==Material::Steel)
            return string("Steel");

        else
            return string("");
    }

    double getDiscountedPrice()
    {
        return price - discount;
    }

    virtual void productDetails()=0;
};



enum class BedSize {Single,SemiDouble,Double};

class Bed:public Furniture
{
    private:
    BedSize bed_size;

    public:
    Bed(double p = 0, double d = 0, Material m = Material::Wood, BedSize b = BedSize::Single)
    {
        setPrice(p);
        setDiscount(d);
        setMadeof(m);
        bed_size = b;
    }

    void productDetails()
    {
        cout<<string(20, '-')<<'\n';
        if(product_name != "")
            cout<<"Product Name: "<<product_name<<'\n';
        cout<<"Regular Price: "<<price<<'\n';
        cout<<"Discounted Price: "<<getDiscountedPrice()<<'\n';
        cout<<"Material: " <<getMadeof()<<'\n';
        cout<<"Bed Size: " <<getBedSize()<<'\n';
        cout<<string(20, '#')<<'\n';
    }

    string getBedSize()
    {
        if(bed_size == BedSize::Single)
            return "Single";

        else if(bed_size == BedSize::SemiDouble)
            return "SemiDouble";

        else if(bed_size == BedSize::Double)
            return "Double";

        else
            return string("");
    }
};

enum class SeatNumber {One, Two, Three, Four, Five};

class Sofa:public Furniture
{
    private:
    SeatNumber seat_no;

    public:
    Sofa(double p = 0, double d = 0, Material m = Material::Wood, SeatNumber s = SeatNumber::One)
    {
        setPrice(p);
        setDiscount(d);
        setMadeof(m);
        seat_no = s;
    }

    void productDetails()
    {
        cout<<string(20, '-')<<'\n';
        if(product_name != "")
            cout<< "Product Name: "<<product_name<<'\n';
        cout<<"Regular Price: "<<price<<'\n';
        cout<<"Discounted Price: "<<getDiscountedPrice()<<'\n';
        cout<<"Material: " <<getMadeof()<<'\n';
        cout<<"Seat Number: "<<getSeatNumber()<<'\n';
        cout<<string(20, '#')<< '\n';
    }

    string getSeatNumber()
    {
        if(seat_no == SeatNumber::One)
            return "One";

        else if(seat_no == SeatNumber::Two)
            return "Two";

        else if(seat_no == SeatNumber::Three)
            return "Three";

        else if(seat_no == SeatNumber::Four)
            return "Four";

        else if(seat_no == SeatNumber::Five)
            return "Five";

        else
            return string("");
    }
};

enum class ChairCount {Two, Four, Six};

class DiningTable:public Furniture
{
    private:
    ChairCount chair_c;

    public:
    DiningTable(double p = 0, double d = 0, Material m = Material::Wood, ChairCount c = ChairCount::Two)
    {
        setPrice(p);
        setDiscount(d);
        setMadeof(m);
        chair_c = c;
    }

    void productDetails()
    {
        cout<<string(20, '-')<<'\n';
        if(product_name != "")
            cout<<"Product Name: "<<product_name<<'\n';

        cout<<"Regular Price: "<<price<<'\n';
        cout<<"Discounted Price: "<<getDiscountedPrice()<<'\n';
        cout<<"Material: " << getMadeof()<<'\n';
        cout<<"Chair Count: "<<getChairCount()<<'\n';
        cout<<string(20, '#')<<'\n';
    }

    string getChairCount()
    {
        if(chair_c == ChairCount::Two)
            return "Two";

        else if(chair_c == ChairCount::Four)
            return "Four";

        else if(chair_c == ChairCount::Six)
            return "Six";

        else
            return string("");
    }
};

void sort_furniture_discount(Furniture** furnitures, int n)
{
    for (int i = 0; i<n; i++)
    {
        for (int j = i + 1; j<n; j++)
        {
            if (furnitures[i]->getDiscountedPrice() < furnitures[j]->getDiscountedPrice())
            {
                Furniture *temp = furnitures[i];
                furnitures[i] = furnitures[j];
                furnitures[j] = temp;
            }
        }
    }
}


int main()
{
    Furniture* f_list[3];

    f_list[0] = new Bed(9000, 100, Material::Wood, BedSize::Double);
    f_list[1] = new Sofa(10000, 200, Material::Steel, SeatNumber::Five);
    f_list[2] = new DiningTable(20000, 690, Material::Board, ChairCount::Two);
    f_list[0]->setProductName("Bed");
    f_list[1]->setProductName("Sofa");

    for (int i=0; i<3; i ++)
        f_list[i]->productDetails();

    f_list[2]->setDiscountPercentage(50);

    for(int i=0; i<3; i++)
        f_list[i]->productDetails();

    sort_furniture_discount(f_list, 3);

    for (int i=0; i<3; i++)
        f_list[i]->productDetails();

    for(int i=0; i<3; i++)
        delete f_list[i];


    return 0;
}
