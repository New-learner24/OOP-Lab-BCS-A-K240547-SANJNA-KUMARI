#include<iostream>
#include<string>
using namespace std;
class Student{
private:
int rollNumber;
public:
string name;
void setRollNo(int r){
    rollNumber=r;
}
int getRollNo(){
    return rollNumber;
}
};
int main(){
Student s1;
int n;
cout<<"Enter roll number: ";
cin>>n;
s1.setRollNo(n);
cout<<"The roll no is = "<<s1.getRollNo()<<endl;
}
