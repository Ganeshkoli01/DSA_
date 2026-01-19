#include <iostream>
using namespace std;

class Student {
    int roll;
public:
    Student(int r) {   // parameterized constructor
        roll = r;
    }

    void show() {
        cout << "Roll No = " << roll;
    }
};

int main() {
    Student s1(101);
    s1.show();
    return 0;
}
