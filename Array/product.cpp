#include <iostream>
#include <algorithm>
using namespace std;

void twoProduct(int nums[], int n, int t) {
    sort(nums, nums + n);   
    int st = 0, end = n - 1;

    while (st < end) {
        int prod = nums[st] * nums[end];

        if (prod == t) {
            cout <<prod;
            return;
        }
        else if (prod > t) {
            end--;    
        }
        else {
            st++;    
        }
    }

    cout << "No pair found";
}

int main() {
    int nums[] = {1, 2, 3, 4, 6};
    int n = sizeof(nums) / sizeof(int);
    int t = 8;  

    twoProduct(nums, n, t);
    return 0;
}


