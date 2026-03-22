#include<iostream>
#include<string>

using namespace std;

class Teacher{

    private:
    int salary;

    public:
    //constructor
     Teacher(){
        cout<< "I will be called automatically when an object of the class is created."<<endl;
    }

    string name;
    int age;

    void setSalary(int s){
        salary = s;

    }
    int getSalary(){
        return salary;
    }

};

int main(){

    //creating objects of the class Teacher to call the constructor
    Teacher t1;

    Teacher t2;

    t1.name = "Dhanush Prajapati";
    t1.age = 30;
    t1.setSalary(50000);

    cout<< t1.name <<endl;
    cout<< t1.age <<endl;
    cout<< t1.getSalary() <<endl;
}


//