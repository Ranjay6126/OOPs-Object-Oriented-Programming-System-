#include<iostream>
using namespace std;

// Parent class 1
class Father {
public:
    void showFather() {
        cout << "This is Father class" << endl;
    }
};

// Parent class 2
class Mother {
public:
    void showMother() {
        cout << "This is Mother class" << endl;
    }
};

// Child class inheriting from both
class Child : public Father, public Mother {
public:
    void showChild() {
        cout << "This is Child class" << endl;
    }
};

int main() {
    Child c;

    c.showFather();  // from Father
    c.showMother();  // from Mother
    c.showChild();   // from Child

    return 0;
}