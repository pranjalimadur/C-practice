#include<iostream>
using namespace std;

float getsinterest(int p, int n, float roi)
{
    float sint;
    sint=(p*n*roi)/100;
    return sint;
}

int main()
{
    int p,t;
    float r,si;
    float getsinterest(int,int,float);
    cout<<"Enter principal amount, rate of interest and time:";
    cin>>p>>r>>t;
    si=getsinterest(p,t,r);
    cout<<"The interest is: "<<si;
}

