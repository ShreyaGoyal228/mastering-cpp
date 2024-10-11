#include<iostream>
using namespace std;
class School{
    private:
     string name;

    public:
    void display()
    {
        cout<<"Display method of School class is called";
    }

};

class Student{
   private:

   School school;

public:
   void showData()
   {
    school.display();
   }
};

int main()
{
  Student s;
  s.showData();
  return 0;
}