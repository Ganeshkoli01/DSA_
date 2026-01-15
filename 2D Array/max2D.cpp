#include <iostream>
using namespace std;

int main() {
    int a[3][3];
    int max;

    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            cin >> a[i][j];

    max = a[0][0];

    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            if(a[i][j] > max)
                max = a[i][j];

    cout << "Maximum = " << max;
    return 0;
}
