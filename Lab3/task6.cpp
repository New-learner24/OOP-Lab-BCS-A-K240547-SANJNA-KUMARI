#include<iostream>
#include<string>
using namespace std;
class Vehicle{
public:
string make;
string model;
Vehicle(string mak, string mod){
    make=mak;
    model=mod;
}
void displayInfo(){
    cout<<"Make = "<<make<<endl<<"Model = "<<model<<endl;
}
};
class Car:public Vehicle{
public:
string engineType;
Car(string mak,string mod,string engtyp):Vehicle(mak,mod){
    engineType=engtyp;
}
void displayInfo(){
    Vehicle::displayInfo();
    cout<<"Engine Type = "<<engineType<<endl;
}
};
int main(){
string mk,md,et;
cout<<"Enter vehicle make: ";
getline(cin,mk);
cout<<"Enter vehicle model: ";
getline(cin,md);
cout<<"Enter engine type: ";
getline(cin,et);
Car c1(mk,md,et);
c1.displayInfo();
  return 0;
}
