#include<iostream>
using namespace std;

int main()
{
    int arr[2][3],i,j;
    cout<<"Enter the elements of the array: ";
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<"the array is: \n";

    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<arr[i][j]<<"\t";
        }
        cout<<"\n";
    }
    return 0;
}