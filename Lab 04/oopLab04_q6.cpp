/*Design a class OrderDetails for an e-commerce platform that combines several concepts. The
class should have orderID (int), itemName (string), and deliveryFee (a constant double) as
private members. Implement a Parameterized Constructor that takes values for all three: it must
use the this keyword to assign the parameters to the member variables orderID and itemName
(assuming naming conflict) and use a Member Initializer List to set the deliveryFee. The class
must also have a Destructor that prints a message confirming the order's specific orderID is
being "Archived and memory cleared".*/
#include<iostream>
using namespace std;
class OrderDetails{
private:
int orderID;
string itemName;
const double deliveryFee;
public:
OrderDetails(int orderID,string itemName,double delFee):deliveryFee(delFee){
    this->orderID=orderID;
    this->itemName=itemName;
}
~OrderDetails(){
    cout<<"The order "<<orderID<<" containing "<<itemName<<" is being Archived and memory cleared "<<endl;
}
};
int main(){
OrderDetails obj1(747,"Pasta",707.5);
return 0;
}