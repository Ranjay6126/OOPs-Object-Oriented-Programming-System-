#include <iostream>
using namespace std;

class Test {
public:
    int* data;

    Test(int val) {
        data = new int(val);
    }

    // Deep copy constructor
    Test(const Test& obj) {
        data = new int(*obj.data);
    }
};

int main() {
    Test t1(10);
    Test t2 = t1;   // Deep copy

    *t2.data = 20;

    cout << *t1.data << endl;  // 10 (unchanged)
    cout << *t2.data << endl;  // 20
}