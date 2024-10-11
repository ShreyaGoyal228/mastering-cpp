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
       accountNoPtr=new int;
       *accountNoPtr=*(obj.accountNoPtr);
       this->accountNoPtr=accountNoPtr;
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
 *(a2.accountNoPtr)=10000;  //we have modified the value for a2 object and it exchnage for only a2 object

 cout<<"After modifying the value of both objects are"<<endl;
   a2.getDetails();
   a1.getDetails();
   return 0;
   
}