/*A currency exchange counter in a Pakistani bank uses a fixed exchange rate that should not
change after setup. Create a class CurrencyExchange with the following private members:
PKR_to_USD_Rate (a constant double), branchName (a reference to a string), and
totalTransactions (integer). The Constructor must accept values for all three members, but it
must use a Member Initializer List to initialize the constant and the reference variables, as they
must be set at the time of object creation. Include a method convertPKRtoUSD that uses the fixed
rate to calculate and return the USD equivalent for a given PKR amount.*/
#include<iostream>
using namespace std;
class CurrencyExchange{
private:
const double PKR_to_USD_Rate;
string &branchName;
int totalTransactions;
public:
CurrencyExchange(double rate,string &branch,int transac):PKR_to_USD_Rate(rate),branchName(branch),totalTransactions(transac){
}
double convertPKRtoUSD(double AmountInPkr){
    return AmountInPkr/PKR_to_USD_Rate;
}
void display(){
    cout<<"Branch: "<<branchName<<endl;
    cout<<"Pkr to USD exchange rate: "<<PKR_to_USD_Rate<<endl;
    cout<<"Total Transactions: "<<totalTransactions<<endl;
}
};
int main(){
string branch="HBL";
CurrencyExchange c1(256.0,branch,1);
double pkrCurrency=27895;
double converted=c1.convertPKRtoUSD(pkrCurrency);
c1.display();
cout<<pkrCurrency<<" PKR = "<<converted<<" USD"<<endl;
return 0;
}