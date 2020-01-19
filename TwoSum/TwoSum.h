//
// Created by lzy on 2020/1/19 0019.
//

#ifndef TWOSUM_TWOSUM_H
#define TWOSUM_TWOSUM_H
#include <vector>
#include<map>

using namespace std;
class TwoSum {
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
#endif //TWOSUM_TWOSUM_H
