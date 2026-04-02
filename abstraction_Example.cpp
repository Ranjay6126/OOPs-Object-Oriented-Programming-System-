#include <iostream>
using namespace std;

// Abstract base class (interface-like)
class Shape {
public:
    virtual void draw() const = 0; // pure virtual -> abstraction
    virtual double area() const = 0;
    virtual ~Shape() = default;
};

// Concrete class
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    void draw() const override {
        cout << "Drawing Circle\n";
    }
    double area() const override {
        return 3.141592653589793 * radius * radius;
    }
};

// Another concrete class
class Rectangle : public Shape {
private:
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    void draw() const override {
        cout << "Drawing Rectangle\n";
    }
    double area() const override {
        return width * height;
    }
};

int main() {
    Shape* s1 = new Circle(5.0);
    Shape* s2 = new Rectangle(4.0, 3.0);

    s1->draw();
    cout << "Area: " << s1->area() << "\n";

    s2->draw();
    cout << "Area: " << s2->area() << "\n";

    delete s1;
    delete s2;
    return 0;
}