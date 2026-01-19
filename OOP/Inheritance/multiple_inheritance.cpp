#include <iostream>
using namespace std;

class Father {
public:
    void house() {
        cout << "Father's house" << endl;
    }
};

class Mother {
public:
    void car() {
        cout << "Mother's car" << endl;
    }
};

class Child : public Father, public Mother {
};

int main() {
    Child c;
    c.house();
    c.car();
    return 0;
}
