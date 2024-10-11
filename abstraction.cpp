#include<iostream>
using namespace std;
//any class in which we define pure virtual function becomes an abstract class
 class Animal{
  public:
   virtual void sound()=0;  //pure virtual function

   void show()
   {
    cout<<"Non abstract method inside abstract class";
   }
 };

 class Horse:public Animal{
public:
  void sound()
  {
    cout<<"Ghoooo";
  }

 };

 int main()
 { // Animal a;  abstract class can't be instantiated
    Horse a;
    a.sound();
    a.show();
 }