//i want to intialize the parent class constructor with the help of derived class
#include<iostream>
using namespace std;

class Parent{

 public:
 string parentName;
 int parentAge;

Parent(string parentName,int parentAge)
{
   this->parentName=parentName;
   this->parentAge=parentAge;
}

};

class Child:public Parent{
  public:
  string childName;

Child( string childName,string parentName,int parentAge):Parent(parentName,parentAge)
{
   this->childName=childName;
}

void displayDetails()
{
    cout<<"Parent name is "<<parentName<<endl;
    cout<<"parent age is "<<parentAge<<endl;
    cout<<"Child name is 
    "<<childName<<endl;}

};

int  main()
{
    Child c("Shreya","Neetu",48);
    c.displayDetails()
}