#include <iostream>
using namespace std;

// Function to print the largest of 3 numbers
void printLargest(int a, int b, int c) {
    if (a >= b && a >= c) {
        cout << a << " is the largest number." << endl;
    } else if (b >= a && b >= c) {
        cout << b << " is the largest number." << endl;
    } else {
        cout << c << " is the largest number." << endl;
    }
}

int main() {
    int x, y, z;
    cout << "Enter three numbers: ";
    cin >> x >> y >> z;

    printLargest(x, y, z);

    return 0;
}
