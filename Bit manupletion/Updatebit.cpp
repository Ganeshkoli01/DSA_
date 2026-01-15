#include <iostream>
using namespace std;

void isUpdatebit(int num, int i, int val) {
    num = num & ~(1 << i);     // clear ith bit
    num = num | (val << i);    // set ith bit to val

    cout << num << endl;
}

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;

    int i;
    cout << "Enter the bit position: ";
    cin >> i;

    int val;
    cout << "Enter the value (0 or 1): ";
    cin >> val;

    isUpdatebit(num, i, val);

    return 0;
}
