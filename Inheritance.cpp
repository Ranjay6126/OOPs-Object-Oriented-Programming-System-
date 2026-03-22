
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
};                      




int main(){

    Teacher t1("Ranjay", 22);

    cout << t1.name << endl;
    cout << t1.age << endl;

    return 0;
}                   

        