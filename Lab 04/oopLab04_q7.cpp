/*Model a complex bank account system with the class SecureBankAccount. This class must manage accountNumber (int), balance (double), accountType (a constant string, e.g.,"Current"), and *logHistory (a pointer to an integer, dynamically allocated, representing a log size). The Parameterized Constructor must: 1) use a Member Initializer List to initialize the constant accountType, 2) use the this keyword for accountNumber and balance, and 3) dynamically allocate memory for logHistory and initialize the value. It must also include
simple conceptual error handling by printing an error message if the initialBalance is less than 500.0 PKR. Finally, the class must include a Deep Copy Constructor (allocating new memory for *logHistory) and a Destructor that explicitly uses delete to release the dynamically allocated memory.*/
#include<iostream>
using namespace std;
class SecureBankAccount{
private:
int accountNumber;
double balance;
const string accountType;
int *LogHistory;
public:
SecureBankAccount(int acc,double bal,string accType,int n):accountNumber(acc),balance(bal),accountType(accType){
    LogHistory=new int(n);
    if(balance<500){
        cout<<"Error! initial balance must be greater than 500.0"<<endl;
      balance=0;
    }
}
SecureBankAccount(const SecureBankAccount &b):accountType(b.accountType){ //deep copy
  this->LogHistory=new int(*b.LogHistory);
  accountNumber=b.accountNumber;
  balance=b.balance;
}
~SecureBankAccount(){
    delete LogHistory;
}
void display()const{
  cout<<"Account number: "<<accountNumber<<endl;
  cout<<"Type: "<<accountType<<endl;
  cout<<"Balance: "<<balance<<endl;
  cout<<"Log address: "<<LogHistory<<endl;
  cout<<"Log size: "<<*LogHistory<<endl;

}
};
int main(){
SecureBankAccount s1(100,700.0,"Saving",6);
cout<<"=====Deep Copy======="<<endl;
SecureBankAccount s2=s1;
s1.display();
s2.display();
return 0;
}