#include<iostream>
using namespace std;

class Person{

    public:
     int var;
     static string name;

     void display()
     {
        cout<<"the value of static data member is";
     }
};

string Person::name="Shreya" ; //we need to initialize the static member outside the class

int main()
{
    Person p;
    cout<<p.name;
}