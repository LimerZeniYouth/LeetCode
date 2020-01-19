#include <iostream>
#include <vector>
#include<map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        map<int, int> m;
        for (int i = 0; i < nums.size(); i++) {
            if (m.count(target - nums[i]))
                return {m[target - nums[i]], i};
            m[nums[i]] = i;
        }
        return {-1, -1};
    }
};

int main() {
    vector<int> a;
    vector<int> n = {2, 7, 11, 7};
    Solution solution;
    a = solution.twoSum(n, 9);
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
