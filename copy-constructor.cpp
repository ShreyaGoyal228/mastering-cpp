#include<iostream>
using namespace std;

class Account{
  private:
     int accountPin;  //can't access it directly as it is private
    public:
    int accountNo;
    string bankName;
    string ifscCode;
    Account(int accountNo,string bankName,string ifscCode)
    {
        this->accountNo=accountNo;
        this->bankName=bankName;
        this->ifscCode=ifscCode;
    }
    Account(Account &obj)
    {
        cout<<"Copy constructor called that is made by us";
        this->accountNo=obj.accountNo;
        this->bankName=obj.bankName;
        this->ifscCode=obj.ifscCode;
    }
    void getDetails()
    {
        cout<<"account no is"<<accountNo;
        cout<<"bankName is"<<bankName;
        cout<<"ifscCode is"<<ifscCode;
    }
};

int main()
{
    Account a1(10,"PNB","pnb00999");
   a1.getDetails();

   Account a2(a1); //copy constructor 
   a2.getDetails();
}