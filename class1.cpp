#include<iostream>
using namespace std;

class Employee
{
    private:
        int emp_Id;
        float emp_Sal;
        string emp_Name;
    public:
        int emp_Details()
        {
            emp_Id=12;
            emp_Sal=3636.77;
            emp_Name="Pranjali";
        }

        int show()
        {
            cout<<"Emp id is: "<<emp_Id<<endl;
            cout<<"Emp salary is: "<<emp_Sal<<endl;
            cout<<"Emp name is: "<<emp_Name<<endl;
        }
};
int main()
{   
    Employee e;
    e.emp_Details();
    e.show();
    return 0;
}