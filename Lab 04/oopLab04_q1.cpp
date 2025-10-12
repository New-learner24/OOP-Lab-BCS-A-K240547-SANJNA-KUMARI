/*In Pakistan, mobile phone users often purchase pre-paid 'load'. Design a C++ class named
MobileAccount to manage this. The class must include two data members: balance (double)
and phoneNumber (string). Implement a Default Constructor that automatically initializes the
balance to 50.0 PKR (Pakistani Rupees) and sets the phoneNumber to an empty string "".
Additionally, implement a Parameterized Constructor that accepts a phoneNumber and an initial
balance to set the object's details upon creation. Finally, include a display() method to output
the phone number and current balance for any object created.*/
#include<iostream>
using namespace std;
class MobileAccount{
double balance;
string phoneNumber;
public:
MobileAccount(){
    this->balance=50.0;
    this->phoneNumber="";
}
MobileAccount(string phoneNo,double bal){
    this->phoneNumber=phoneNo;
    this->balance=bal;
}
void display(){
    cout<<"The phone no = "<<phoneNumber<<", current balance = "<<balance<<" PKR"<<endl;
}
};
int main(){
MobileAccount m1;
string phoneNo;
double bal;
cout<<"Enter your Phone number: ";
cin>>phoneNo;
cout<<"Enter your current balance: ";
cin>>bal;
MobileAccount m2(phoneNo,bal);
m1.display();
m2.display();
return 0;
}