

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