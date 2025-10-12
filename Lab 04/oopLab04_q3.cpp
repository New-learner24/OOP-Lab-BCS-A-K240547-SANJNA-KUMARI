/*Real estate management involves property deeds, which might share legal data. Model this with
a class PropertyDeed that has an integer pointer *ownerID as its private member, where
memory for the ID is allocated dynamically in the regular constructor. Implement an Explicit
Shallow Copy Constructor that copies only the pointer address from the source object to the new
object, resulting in shared memory. Then, implement a Deep Copy Constructor that allocates
new memory for *ownerID and copies the actual data value, ensuring the new object's data is
independent of the original. Demonstrate the difference in behavior by changing the data in an
original object and observing the result in the shallow and deep copies using a display()
method that shows both the data value and the memory address.*/
#include<iostream>
using namespace std;
class PropertyDeed{
private:
int *ownerID;
public:
PropertyDeed(int val){
  this->ownerID= new int (val);//if obj is dynamically allocated then obj=new PropertyDeed()
}
PropertyDeed(const PropertyDeed &obj);
PropertyDeed(const PropertyDeed &obj,int){
    this->ownerID=new int(*obj.ownerID); //dereferencing the owner id
}
void setID(int id){
    *ownerID=id;
}
void display(){
    cout<<"ID: "<<*ownerID<<" and Address: "<<ownerID<<endl;
}
};
PropertyDeed::PropertyDeed(const PropertyDeed &obj){
    this->ownerID=obj.ownerID;
}
int main(){
PropertyDeed p1(5);
cout<<"Original object"<<endl;
p1.display();

cout<<"=== Shallow Copy ==="<<endl;
PropertyDeed p2=p1;
cout<<"Copied Object: "<<endl;
p2.display();
cout<<"Chaning value of p1 to 10"<<endl;
p1.setID(10);
p1.display();
p2.display();
cout<<"It also change the value of p2 and sharing same address as shown"<<endl;

cout<<"=== Deep Copy ==="<<endl;
PropertyDeed p3(p1, 0);//to distinguish shallow and deep constructor passing a dummy int
cout<<"Copied Object: "<<endl;
p3.display();
cout<<"Chaning value of p1 to 5"<<endl;
p1.setID(5);
p1.display();
p3.display();
cout<<"Value of p3 remains 10 as we have allocated different memory and have different address"<<endl;
return 0;
}