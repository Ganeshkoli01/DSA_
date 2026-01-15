#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> v = {
        {1,2,3},
        {4,5,6}
    };

    int sum = 0;
    for(int i = 0; i < v.size(); i++)
        for(int j = 0; j < v[i].size(); j++)
            sum += v[i][j];

    cout << "Sum = " << sum;
    return 0;
}
