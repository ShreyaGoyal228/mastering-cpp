//run tym polymorphism --- >  virtual function
#include<iostream>
using namespace std;

class Parent{
 public:
 string parentName;
 int parentAge;


virtual void displayDetails(){
   cout<<"Parent class function called";
}
};
class Child:public Parent{
public:
 string childName;
 int childAge;

void displayDetails(){
   cout<<"Child class function calledddd";
}
};

int main()
{
   Child c;
   c.displayDetails();

}