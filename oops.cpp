#include<iostream>
#include<string>
using namespace std;

class Teacher{

    public:
    // properties // attributes

    string name;
    string dept;
    string subject;
    double salary;


    // methods // member functions

    void changeDept(string newDept){
        dept = newDept;
    }
};

int main(){
    Teacher t1;

    t1.name = "Ranjay Prajapati";
    t1.subject = "Data Structures";
    t1.dept = "Computer Science";
    t1.salary = 50000.0;

    cout<< t1.name <<endl;
    cout<< t1.subject <<endl;

    return 0;
}


