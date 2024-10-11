//Polymorphism : Compile tym -->fn overloading , constructor overloading
//Run tym ---> fn overriding , virtual function
#include<iostream>
using namespace std;

class Parent
{  public:
 string parentName;
 int parentAge;
 int noOfChildren;

 Parent()
  {
    cout<<"non-parameterized constructor called";
  }
Parent(string parentName,int parentAge)
{     cout<<"constructor 1 called";

   this->parentName=parentName;
   this->parentAge=parentAge;
}
Parent(int parentAge,int noOfChildren)
{   
    cout<<"constructor 2 called";
    this->noOfChildren=noOfChildren;
   this->parentAge=parentAge;
}

};

int main()
{
   Parent p(70,3);    //on the basis of type of srguments the constructor 2 called
}