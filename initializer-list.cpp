#include<iostream>
using namespace std;

class Student{
 private:
  int a,b;

  public:
  Student(int i,int j);
  void func1();
};
Student::Student(int i,int j):a(i),b(j){}; //usage of initialization list in constructors

void Student::func1()
{
  cout<<"the values are"<<a<<b;
}
int main(){
   Student s(10,20);
   
   s.func1();
}