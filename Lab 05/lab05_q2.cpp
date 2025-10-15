/*The Pakistan Telecommunication Authority (PTA) assigns a unique, non-transferable serial
number to every registered device. Create a class MobileDevice with private data members:
modelName and IMEINumber. Declare IMEINumber as a constant data member that must be
initialized via the constructor's initializer list. Implement a public constant member function
verifyDevice() that displays the device's details and guarantees that it will not modify the
stored IMEINumber or modelName.*/
#include<iostream>
using namespace std;
class MobileDevice{
string modelName;
const string IMEINumber;
public:
MobileDevice(string modelName,string iMEINumber):IMEINumber(iMEINumber){
    this->modelName=modelName;
}
 void verifyDevice()const{
    cout<<"The device's model name is: "<<modelName<<endl;
    cout<<"The device's IMEINumber is: "<<IMEINumber<<endl;
}
};
int main(){
MobileDevice m1("Redmi note 13 pro","123412345672134");
m1.verifyDevice();
return 0;
}