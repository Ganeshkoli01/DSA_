#include <iostream>
using namespace std;

class A {
private:
    int x;

public:
    A() {
        x = 50;
    }

    friend class B;
};

class B {
public:
    void show(A obj) {
        cout << "Value of x: " << obj.x << endl;
    }
};

int main() {
    A a;
    B b;
    b.show(a);
    return 0;
}
