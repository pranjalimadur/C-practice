#include<iostream>
using namespace std;

class circle
{
    float area, radius;

public:
    circle()
    {
        cout<<"Enter the radius: ";
        cin>>radius;
    } 
    void calculate();
    void show();
};

inline void circle :: calculate()
{
    area=3.14*radius*radius;
}

inline void circle :: show()
{
    cout<<"Area is: "<<area;
}
int main()
{   
    circle c;
    c.calculate();
    c.show();
    return 0;
}