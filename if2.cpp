#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number";
    cin>>n;

    if(n>=70)
    {
        cout<<"Distinction";
    }
    else if(n>=60)
        {
            cout<<"good";
        }
        else if(n>=50)
        {
            cout<<"pass";
        }
        else{
            cout<<"Fail";
        }

return 0;
}