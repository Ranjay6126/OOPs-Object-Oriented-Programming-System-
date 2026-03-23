/* Inheritance in C++ allows a new class (derived class) to inherit properties and behaviors (data members and member functions) from an existing class (base class). This promotes code reusability and establishes a natural hierarchical relationship between classes.

#include<iostream>
#include<string>
using namespace std;

class PersonA{
public:
    string name;
    int age;
};

class PersonB : public PersonA{
public:
    int rollno;

    void getInfo(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << rollno << endl;
    }
};

int main(){

    PersonB b;

    // Assign values manually
    b.name = "Alice";
    b.age = 20;
    b.rollno = 123;

    b.getInfo();

    return 0;
} */



#include<iostream>
#include<string>
using namespace std;

class PersonA{
public:
    string name;
    int age;

    // Base class constructor
    PersonA(string n, int a){
        cout << "I am parent constructor" << endl;
        name = n;
        age = a;
    }
};

class PersonB : public PersonA{
public:
    int rollno;

    // Derived class constructor
    PersonB(string n, int a, int r) : PersonA(n, a){
        cout << "I am child constructor" << endl;
        rollno = r;
    }

    void getInfo(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << rollno << endl;
    }
};

int main(){
    PersonB b("Alice", 20, 123);
    b.getInfo();
    return 0;
}