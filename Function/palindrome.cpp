#include <iostream>
using namespace std;

// Function to check palindrome
bool isPalindrome(int num) {
    int original = num, reversed = 0, remainder;

    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    return (original == reversed);
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isPalindrome(number)) {
        cout << number << " is a Palindrome." << endl;
    } else {
        cout << number << " is NOT a Palindrome." << endl;
    }

    return 0;
}
