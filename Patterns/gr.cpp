#include <iostream>
using namespace std;

int main() {

    int N;
    cout << "Enter the n: ";
    cin >> N;  // input value
    

    for (int i = 1; i <= N; i++) {
        if (i == 1 || i == N) {
            // Print full row of stars for first and last row
            for (int j = 1; j <= N; j++) {
                cout << "* ";
            }
        } else {
            // Print (N - 1) spaces followed by a single star
            for (int j = 1; j < N; j++) {
                cout << "  ";  // two spaces to match star gap
            }
            cout << "*";
        }
        cout << endl;  // move to next line
    }

    return 0;
}
