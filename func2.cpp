#include<iostream>
using namespace std;

int get_add(int x,int y,int z)
{
    int s= x+y+z;
    return s;
}
int main()
{
    int a,b,c,sum;
    int get_add(int,int,int);
    cout<<"Enter three numbers:";
    cin>>a>>b>>c;
    sum=get_add(a,b,c);
    cout<<"The sum is: "<<sum;
}