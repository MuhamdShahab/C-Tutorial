#include <iostream>
using namespace std;

struct employee
{
    /* data */
    int id;
    string name;
    float height;
    char seat;
    employee(int a,string b,float c)
    {
        id = a;
        name = b;
        height = c;
    }
    float bonus(float hrs)
    {
        int rph = 1000;
        return hrs*rph;
    }
};


int main()
{
    struct employee shahab(1,"Shahab",5.11);
    shahab.seat = 'A';
    cout<<"Employee id#"<<shahab.id<<" "<<shahab.name<<"   with height of "<<shahab.height<<" loves the character "<<shahab.seat<<endl;
    cout<<"Bonus Calculated: "<<shahab.bonus(44.5);
}
