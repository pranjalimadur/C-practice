#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int i, *ptr;
    ptr=(int*)malloc(10*sizeof(int));
    if(ptr==NULL)
    {
        cout<<endl<<"Error! No memory allocated";
        exit(0);
    }
    cout<<"Enter the numbers: ";
    for(i=0;i<5;i++)
    {
        cin>>ptr[i];
    }
    cout<<"The numbers are: ";
    for(i=0;i<5;i++)
    {
        cout>>ptr[i];
    }
    free(ptr);
    return 0;
}