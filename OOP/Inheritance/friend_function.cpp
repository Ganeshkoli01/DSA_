#include <iostream>
using namespace std;

class Box {
private:
    int length;

public:
    Box() {
        length = 10;
    }

    friend void showLength(Box b);
};

void showLength(Box b) {
    cout << "Length: " << b.length << endl;
}

int main() {
    Box b;
    showLength(b);
    return 0;
}
