#include<iostream>
#include<string>
using namespace std;
class Student{
private:
string name;
int rollNo;
double marks;
char grade;
public:
Student(string n,int r, double m){
    name=n;
    rollNo=r;
    marks=m;
}
void calculateGrade(){
if(marks>=90){
     grade='A';
}else if(marks>=80){
     grade='B';
}else if(marks>=70){
     grade='C';
}else{
     grade='F';
}
}
void displayStudentInfo(){
cout<<endl<<"********Student Record********"<<endl;
cout<<"Student name = "<<name<<endl<<"Student Roll no = "<<rollNo<<endl<<"Student's marks = "<<marks<<endl<<"Student's grade = "<<grade<<endl;
}
};
int main(){
string n;
int r;
double m;
cout<<"First student info"<<endl;
cout<<"Enter your name: ";
getline(cin,n);
cout<<"Enter your roll no: ";
cin>>r;
cout<<"Enter your marks: ";
cin>>m;
Student s1(n,r,m);
cin.ignore();
cout<<"Second student info"<<endl;
cout<<"Enter your name: ";
getline(cin,n);
cout<<"Enter your roll no: ";
cin>>r;
cout<<"Enter your marks: ";
cin>>m;
Student s2(n,r,m);
s1.calculateGrade();
s2.calculateGrade();
s1.displayStudentInfo();
s2.displayStudentInfo();
  return 0;
}
