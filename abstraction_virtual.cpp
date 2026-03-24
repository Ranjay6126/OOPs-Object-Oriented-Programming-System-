#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {   // virtual function
        cout << "This is Base class show function" << endl;
    }
};

class Derived : public Base {
public:
    void show() {   // overrides Base function
        cout << "This is Derived class show function" << endl;
    }
};

int main() {
    Base* b;      // base class pointer
    Derived d;

    b = &d;
    b->show();    // calls Derived's show()
}