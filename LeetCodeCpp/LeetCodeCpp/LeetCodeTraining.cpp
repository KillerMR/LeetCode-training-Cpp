#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::cin;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> res;
        for (int i = 0; i < nums.size(); i++) {
            res.push_back(sum(nums, i));
        }
        return res;
    }
    int sum(vector<int> num, int n) {
        int res = 0;
        for (int i = 0; i <= n; i++) {
            res += num[i];
        }
        return res;
    }
};

int main() {
    vector<int> nums = { 1,2,3,4 };
    Solution sol;
    
    // Для виведення векторів
    vector<int> res = sol.runningSum(nums);
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << std::endl;
    }
    return 0;
}