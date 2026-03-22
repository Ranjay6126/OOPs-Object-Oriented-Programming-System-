// #include<iostream>
// #include<string>

// using namespace std;

// class Teacher{

//     private:
//     int salary;

//     public:
//     //constructor
//      Teacher(){
//         cout<< "I will be called automatically when an object of the class is created."<<endl;
//     }

//     string name;
//     int age;

//     void setSalary(int s){
//         salary = s;

//     }
//     int getSalary(){
//         return salary;
//     }

// };

// int main(){

//     //creating objects of the class Teacher to call the constructor
//     Teacher t1;

//     Teacher t2;

//     t1.name = "Dhanush Prajapati";
//     t1.age = 30;
//     t1.setSalary(50000);

//     cout<< t1.name <<endl;
//     cout<< t1.age <<endl;
//     cout<< t1.getSalary() <<endl;
// }





//Paramaterized Constructor//

#include<iostream>
#include<string>
using namespace std;

class Teacher{

private:
    double salary;

public:
    string name;
    string dept;
    string subject;

    // Parameterized Constructor
    Teacher(string n, string d, string s, double sal){
        name = n;
        dept = d;
        subject = s;
        salary = sal;
    }

    void changeDept(string newDept){
        dept = newDept;
    }

    double getSalary(){
        return salary;
    }
};

int main(){

    Teacher t1("Ranjay", "CSE", "DSA", 60000);

    cout << t1.name << endl;
    cout << t1.dept << endl;
    cout << t1.subject << endl;
    cout << t1.getSalary() << endl;

    // change department
    t1.changeDept("AI");

    cout << "After change: " << t1.dept << endl;
}

