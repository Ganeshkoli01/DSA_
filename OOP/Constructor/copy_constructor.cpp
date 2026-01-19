#include <iostream>
using namespace std;

class Student {
    int roll;
public:
    Student(int r) {
        roll = r;
    }

    // Copy constructor
    Student(Student &obj) {
        roll = obj.roll;
    }

    void show() {
        cout << "Roll No = " << roll << endl;
    }
};

int main() {
    Student s1(101);
    Student s2 = s1;   // copy constructor called

    s2.show();
    return 0;
}
