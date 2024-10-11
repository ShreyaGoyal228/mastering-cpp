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
    void getDetails()
    {
        cout<<"account no is"<<accountNo;
        cout<<"bankName is"<<bankName;
        cout<<"ifscCode is"<<ifscCode;
    }
};

int main()
{
    Account a(10,"PNB","pnb00999");

   a.getDetails();
}