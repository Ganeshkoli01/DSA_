#include <iostream>
using namespace std;

class Demo {
    int x;
public:
    Demo() {
        x = 0;
    }

    Demo(int a) {
        x = a;
    }

    Demo(int a, int b) {
        x = a + b;
    }

    void show() {
        cout << "x = " << x << endl;
    }
};

int main() {
    Demo d1;
    Demo d2(10);
    Demo d3(10, 20);

    d1.show();
    d2.show();
    d3.show();

    return 0;
}
