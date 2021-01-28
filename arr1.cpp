#include<iostream>
using namespace std;

int main()
{
    int arr[50],n,i;
    cout<<"Enter number of elements: ";
    cin>>n;
    cout<<"Enter "<<n<<" elements in the array";

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<"\n";
    }
    return 0;
}
