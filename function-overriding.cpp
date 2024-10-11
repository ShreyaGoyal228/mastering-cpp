//run tym polymorphism --- >  function overriding 
#include<iostream>
using namespace std;

class Parent{
 public:
 string parentName;
 int parentAge;


void displayDetails(){
   cout<<"Parent class function called";
}
};
class Child:public Parent{
public:
 string childName;
 int childAge;

void displayDetails(){
   cout<<"Child class function called";
}
};

int main()
{
   Child c;
   c.displayDetails();

}