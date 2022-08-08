#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::cin;

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> res;
        for (int i = 0; i < nums.size(); i++) {
            res.push_back(nums[nums[i]]);
        }
        return res;
    }
};

int main() {
    vector<int> nums = { 0, 2, 1, 5, 3, 4 };
    Solution sol = Solution();
    vector<int> res = sol.buildArray(nums);
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << std::endl;
    }
    return 0;
}