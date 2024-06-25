#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Student {

public:

int id;
string name;
int age ;

// ? default constructor

 Student()
    {
        cout << "Student  default ctor called"<<endl;
    }


// ! parameterize constructor

Student(int id, string name, int age){
// calling using this 
    this->id = id;
    this->name = name;
    this->age = age;
    cout << "Student  parameterized ctor called"<<endl;
}





};




int main(){


/*Start
// ! it's a brute and expensive operation and non mentanable 
Student s1 ;
s1.name = " golu";
s1.id =  4;
s1.age = 11;


cout<<s1.name << "";
cout<<s1.id<< "";
cout<<s1.age<< "";

 */ 
// its a default constructor
Student s1;

Student s2(1, "golu", 11);

// Heap allocation object
    Student* s4 = new Student(1, "golu", 11);
    // Don't forget to delete the allocated memory
    delete s4;

}






