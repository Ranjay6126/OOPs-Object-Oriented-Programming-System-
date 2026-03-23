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
};

class PersonC : public PersonB{
    public:
    string reserach_Area;

};

int main(){

    PersonC z1;
    z1.name = "Alice";
    z1.age = 20;
    z1.rollno = 123;
    z1.reserach_Area = "AI";

    cout<< z1.name << endl;
    cout<< z1.age << endl;
    cout<< z1.rollno << endl;
    cout<< z1.reserach_Area << endl;

    return 0;

}