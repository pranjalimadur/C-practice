#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<endl<<"Enter a number";
    cin>>n;

    if(n>0)
    {
        cout<<"number is positive";
    }
    else if(n<0)
    {
        cout<<"number is negative";
    }
    else{
        cout<<"number is zero";
    }

}