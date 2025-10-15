/*A call center in Karachi, such as a Jazz customer service center, tracks its daily operations.
Develop a class CallRecord with details like callerID and durationMinutes. In your main
function, create an array of objects of size 20 to represent the calls handled in one shift.
Implement a static data member in CallRecord to keep a running count of the total number of
calls logged since the program started, and provide a static member function getTotalCalls()
that can be called using the class name to display this total count.*/
#include<iostream>
using namespace std;
class CallRecord{
string callerID;
int durationMinutes;
static int totalCalls;
public:
CallRecord(string id="Unknown",int duration=0){
callerID=id;
durationMinutes=duration;
totalCalls++;
}
void display()const{
cout<<"Caller ID: "<<callerID<<endl;
cout<<"Call Duration: "<<durationMinutes<<" minutes"<<endl;
}
static void getTotalCalls(){
cout<<"Total calls logged so far: "<<totalCalls<<endl;
}
};
int CallRecord::totalCalls=0;
int main(){
CallRecord calls[20]={
CallRecord("03001234567",5),CallRecord("03111234567",8),CallRecord("03221234567",3),
CallRecord("03331234567",7),CallRecord("03441234567",2),CallRecord("03051234567",4),
CallRecord("03161234567",10),CallRecord("03271234567",6),CallRecord("03381234567",12),
CallRecord("03491234567",9),CallRecord("03001234568",11),CallRecord("03111234568",2),
CallRecord("03221234568",4),CallRecord("03331234568",5),CallRecord("03441234568",7),
CallRecord("03051234568",3),CallRecord("03161234568",8),CallRecord("03271234568",6),
CallRecord("03381234568",5),CallRecord("03491234568",4)
};
cout<<"Details of first three calls:"<<endl;
for(int i=0;i<3;i++){
calls[i].display();
}
CallRecord::getTotalCalls();
return 0;
}
