#include <iostream>
using namespace std;

class Shape {   // Abstract class
public:
    virtual void draw() = 0;   // Pure virtual function
};

class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing Circle" << endl;
    }
};

class Square : public Shape {
public:
    void draw() {
        cout << "Drawing Square" << endl;
    }
};

int main() {
    Shape* s;
    Circle c;
    Square sq;

    s = &c;
    s->draw();   // Drawing Circle

    s = &sq;
    s->draw();   // Drawing Square
}