/*Design a C++ class named PetrolPump to manage fuel transactions. Implement a static data
member called pricePerLiter (e.g., 270.50 PKR) to store the uniform rate for all transactions
across all pump objects. Include non-static members for pumpID and litersFilled, and write a
simple non-static member function, printReceipt(), that calculates and displays the total
amount due using the shared static price.*/
#include<iostream>
using namespace std;
class PetrolPump{
static double pricePerLiter;
int pumpID;
double LitersFilled;
public:
PetrolPump(int ID, double LitersFill):pumpID(ID),LitersFilled(LitersFill){}
void printReceipt(){
    cout<<"The pump id is: "<<pumpID<<endl;
    cout<<"Total liters filled = "<<LitersFilled<<endl;
    cout<<"Price per liter is: "<<pricePerLiter<<endl;
    cout<<"Total amount due is: "<<LitersFilled*pricePerLiter<<endl;
}
};
double PetrolPump::pricePerLiter=27.6;
int main(){
PetrolPump p1(101,20);
p1.printReceipt();
return 0;
}
/*static void setPrice(double newPrice) {
    pricePerLiter = newPrice;
}*/
