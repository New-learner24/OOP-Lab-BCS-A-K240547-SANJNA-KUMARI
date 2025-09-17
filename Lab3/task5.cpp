#include<iostream>
#include<string>
using namespace std;
class Concrete{
    private:
    string message;
public:
Concrete(string msg){
    message=msg;
}
void displayMessage(){
    cout<<"The stored message is = "<<message<<endl;
}
};
int main(){
    string n;
    cout<<"Enter a string: ";
    getline(cin,n);
    Concrete object(n);
    object.displayMessage();
  return 0;
}
