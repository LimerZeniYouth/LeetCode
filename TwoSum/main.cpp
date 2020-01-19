#include <iostream>
#include <vector>
#include "TwoSum.h"

using namespace std;

int main() {
    vector<int> a;
    vector<int> n = {2, 7, 11, 7};
    TwoSum twoSum;
    a = twoSum.twoSum(n, 9);
    for (int i = 0; i < a.size(); i++) {
        if (i == 0) {
            cout << "[" << a[i] << ",";
        } else if (i+1 == a.size()) {
            cout << a[i]<<"]";
        } else {
            cout << a[i] << ",";
        }
    }
    return 0;
}
1
