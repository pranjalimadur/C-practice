#include<iostream>
using namespace std;

int main()
{
    int *p,i;
    p=new int[3];
    cout<<"Enter the elements: ";
    for(i=0;i<3;i++)
    {
        cin>>*(p+i);
    }
    for(i=0;i<3;i++)
    {
        cout<<*(p+i)<<"\t";
    }
    return 0;
}