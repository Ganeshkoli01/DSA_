#include <iostream>
using namespace std;

// Function to calculate sum of digits
int sumOfDigits(int num) {
    int sum = 0, remainder;
    while (num != 0) {
        remainder = num % 10;   // get last digit
        sum += remainder;       // add it to sum
        num /= 10;              // remove last digit
    }
    return sum;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    cout << "Sum of digits of " << number << " = " << sumOfDigits(number) << endl;

    return 0;
}
