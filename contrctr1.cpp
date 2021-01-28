#include<iostream>
using namespace std;

class student
{
    int stud_id;
    float stud_marks;
    string stud_name;

public:
student(int stid, float stmarks, string stname)
{
    stud_id=stid;
    stud_marks=stmarks;
    stud_name=stname;
}

void show()
{
    cout<<"Student id is: "<<stud_id<<endl<<"Student marks are: "<<stud_marks<<endl<<"Student name is: "<<stud_name<<endl;
}
};
int main()
{   
    student s1(20,93.3,"Ram");
    student s2(30,92.56,"Shaam");
    s1.show();
    cout<<"-----------------------------------------\n";
    s2.show();
    return 0;
}