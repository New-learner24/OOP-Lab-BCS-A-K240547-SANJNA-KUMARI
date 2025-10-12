/*The National University of Computer and Emerging Sciences-NUCES (NUCES) maintains
student records. Create a class called NUCES_Student with private data members id (integer) and
name (string). You must demonstrate constructor overloading by implementing three different
constructors: a Default Constructor (initializing members to 0 and "Not Registered"), a
Parameterized Constructor (Version 1) that accepts only the student's id (initializing name to
"Name Pending"), and a Parameterized Constructor (Version 2) that accepts both id and name.
For Version 2, if you use the same parameter names as the member variables (e.g., id, name),
you must use the this keyword to correctly assign the parameter values to the object's member
variables and resolve the naming conflict. Include a display() method for testing.*/
#include<iostream>
using namespace std;
class  NUCES_Student{
    private:
    int id;
    string name;
    public:
    NUCES_Student(){
        this->id=0;
        this->name="Not Registered";
    }
    NUCES_Student(int studentId){
        this->id=studentId;
        this->name="Name Pending";
    }
    NUCES_Student(int studentId,string name){
     this->id=studentId;
     this->name=name;
    }
    void display(){
        cout<<"The student name is : "<<name<<" and student id is = "<<id<<endl;
    }
};
int main(){
NUCES_Student s1;
NUCES_Student s2(06);
NUCES_Student s3(07,"Sanjna");
s1.display();
s2.display();
s3.display();
return 0;
}