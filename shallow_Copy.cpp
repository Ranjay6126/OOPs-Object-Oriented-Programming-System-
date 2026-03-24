#include <iostream>
using namespace std;

class Test {
public:
    int* data;

    Test(int val) {
        data = new int(val);
    }
};

int main() {
    Test t1(10);
    Test t2 = t1;   // Shallow copy (default copy constructor)

    cout << *t1.data << endl;  // 10
    cout << *t2.data << endl;  // 10

    *t2.data = 50;

    cout << *t1.data << endl;  // 50 (changed!)
}