#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;        // data hidden
    string name;

public:
    void setData(int r, string n) {   // setter
        rollNo = r;
        name = n;
    }

    void getData() {   // getter
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }
};

int main() {
    Student s1;
    s1.setData(101, "Ganesh");
    s1.getData();

    return 0;
}
