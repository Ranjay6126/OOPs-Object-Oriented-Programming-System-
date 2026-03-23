#include<iostream>
#include<string>
using namespace std;

class Teacher{
public:
    string name;
    int age;

    // Parameterized constructor
    Teacher(string n, int a){
        name = n;
        age = a;
    }

    // Copy Constructor
    Teacher(const Teacher &t){
        name = t.name;
        age = t.age;
    }

    // Destructor
    ~Teacher(){
        cout << "Destructor called for " << name << endl;
    }
};

int main(){
    Teacher t1("Ranjay", 22);

    // Copy constructor called
    Teacher t2(t1);

    cout << t2.name << endl;
    cout << t2.age << endl;

    return 0;
}