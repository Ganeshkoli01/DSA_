#include <iostream>
using namespace std;

void findOccurrences(int arr[], int n, int key, int index) {
    
    // Base case
    if (index == n) {
        return;
    }

    // If key found, print index
    if (arr[index] == key) {
        cout << index << " ";
    }

    // Recursive call
    findOccurrences(arr, n, key, index + 1);
}

int main() {
    
    int arr[] = {3, 2, 4, 5, 6, 2, 7, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 2;

    findOccurrences(arr, n, key, 0);

    return 0;
}