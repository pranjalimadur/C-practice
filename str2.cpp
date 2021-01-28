#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    char name[20],temp;
    int i,j;
    cout<<"Enter a name: ";
    gets(name);
    i=0;
    j=strlen(name)-1;

    while(i<j)
    {
        temp=name[i];
        name[i]=name[j];
        name[j]=temp;
        i++;
        j--;
    }
    cout<<"The reverse of name is: "<<name;
    return 0;
}