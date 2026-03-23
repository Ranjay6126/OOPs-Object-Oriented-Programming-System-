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
}