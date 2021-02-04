#include<iostream>
using namespace std;

class Animal
{
    public:

    void walking()
    {
        cout<<"Animals can walk or move"<<endl;
    }
    void eating()
    {
        cout<<"Animals can eat"<<endl;
    }
    void sleeping()
    {
        cout<<"Animals sleep in the night"<<endl;
    }


};

class seaAnimal : public Animal
{
    public:
    void swimming()
    {
        cout<<"Sea animals can swim in water"<<endl;
    }
    // void sleeping()
    // {
    //     cout<<"Not sure about their sleeping methods"<<endl;
    // }
};

int main()
{
    Animal a1;
    a1.eating();
    a1.sleeping();

    seaAnimal s1;
    s1.sleeping();
    return 0;
}