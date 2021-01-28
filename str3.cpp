#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char name[20],newname[20];
    cout<<"Enter original name: ";
    gets(name);
    cout<<"The copied name is: "<<strcpy(newname,name);

    return 0;
}