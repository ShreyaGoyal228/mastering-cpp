#include<iostream>
using namespace std;

class Account{
  private:
     int accountPin; 
    public:
    int* accountNoPtr;
    string bankName;
    string ifscCode;
    Account(int accountNo,string bankName,string ifscCode)
    {  accountNoPtr=new int;    //accountPtr is pointing to int type ki memory location
        
       *accountNoPtr = accountNo;
        this->bankName=bankName;
        this->ifscCode=ifscCode;
    }
    Account(Account &obj)
    {
        cout<<"Copy constructor called that is made by us"<<endl;
       this->accountNoPtr=obj.accountNoPtr;
        this->bankName=obj.bankName;
        this->ifscCode=obj.ifscCode;
    }
    void getDetails()
    {
        cout<<"account no is"<<*accountNoPtr;
        cout<<"bankName is"<<bankName;
        cout<<"ifscCode is"<<ifscCode;
        cout<<endl;
    }

    //we are performing the shallow copy to a1 and a2 are both pointing to same memory location and when they goes out of scope then destructor 
    //is called twice for a1 and a2
    ~Account()
    { cout<<"Calling the destructor to delete the memory assigned to accountNoPtr"<<endl;
        delete accountNoPtr;
    }
};

int main()
{
    Account a1(10,"PNB","pnb00999");
   a1.getDetails();

   Account a2(a1); //copy constructor 
 *(a2.accountNoPtr)=10000;  //we have modified the value for a2 object but it exchnage for both the object that is what shallow copy is

 cout<<"After modifying the value both objects are"<<endl;
   a2.getDetails();
   a1.getDetails();
   return 0;
   
}