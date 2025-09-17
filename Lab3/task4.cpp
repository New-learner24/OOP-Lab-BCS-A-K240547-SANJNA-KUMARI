#include<iostream>
#include<string>
using namespace std;
class Calculator{
private:
int num1,num2;
public:
void setNumbers(int n1,int n2);
int add();
};
void Calculator::setNumbers(int n1,int n2){
    num1=n1;
    num2=n2;
}
int Calculator::add(){
    return num1+num2;
}
int main(){
    Calculator c1;
    int n1,n2,Sum=0;
    cout<<"Enter two numbers: ";
    cin>>n1>>n2;
    c1.setNumbers(n1,n2);
    Sum=c1.add();
cout<<"The sum is = "<<Sum<<endl;
  return 0;
}
