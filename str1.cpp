#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

int main()
{
    char str[20];
    int l;
    cout<<"Enter the name: ";
    gets(str);
    cout<<"The length of str is: "<<strlen(str);
    return 0;
}