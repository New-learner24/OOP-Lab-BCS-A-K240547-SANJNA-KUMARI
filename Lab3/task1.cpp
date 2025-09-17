#include<iostream>
#include<string>
using namespace std;
class Student{
public:
string name;
int rollNumber;
};
int main(){
Student s1;
cout<<"Enter name: ";
getline(cin, s1.name);
cout<<"Enter rollNumber: ";
cin>>s1.rollNumber;
cout<<"Name = "<<s1.name<<", RollNumber = "<<s1.rollNumber<<endl;
}
