#include <iostream>
using namespace std;


class Employee
{
    private:
        int cnic;
        int salary;
        int phone;
    public:
        string name;
        string edu;
    Employee(int a, int b, int c)//constructor
    {
        cout<<"Storing data for object."<<endl;
        cnic = a; salary = b; phone = c;
    }
    ~Employee()//destructor
    {
        cout<<"Data Saved Succefully."<<endl;
    }
    void setter(int b1, int c1);//we can modify a fucntuin from outside the class later on but we have to familirize it with class.
    void getter() //getter
    {
        cout<<cnic<<" "<<phone<<" "<<salary<<endl;

    } 
    
};
void Employee::setter(int b1, int c1) //setters accessible from outside
{
    salary =  b1;
    phone = c1;
}


int main()
{
    Employee shahab(11,12,13), asdaq(11,12,13);
    shahab.name = "Muhammad Shahab";
    shahab.edu = " UG MTS ";
    asdaq.name = "Asdaq Khalid";
    asdaq.edu = " BS Civil ";
    cout<<shahab.name<<shahab.edu;
    shahab.getter();
    cout<<asdaq.name<<asdaq.edu;
    asdaq.getter();
    cout<<"Destructor now."<<endl;//destructors are called just before returning in the place they are called.
    return 0;
}













// void swap(int *a,int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
// int main()
// {
//     int x= 10;
//     int y= 20;
//     swap(&x,&y);
// }





// union money
// {
//     int rice;
//     char car;
//     float salary;
// };
// int main()
// {
//     union money m1;
//     m1.rice = 19;
//     cout<<m1.rice;
//     return 0;
// }
