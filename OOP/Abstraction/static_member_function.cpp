#include <iostream>
using namespace std;

class Demo {
public:
    static int x;

    static void show() {
        cout << "Value of x: " << x << endl;
    }
};

int Demo::x = 10;

int main() {
    Demo::show();
    return 0;
}
