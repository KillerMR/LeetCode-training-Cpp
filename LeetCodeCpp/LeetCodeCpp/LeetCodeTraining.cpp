#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::cin;

class Solution {
public:
    int sum(int num1, int num2) {
        return num1 + num2;
    }
};

int main() {
    int num1 = 5;
    int num2 = 5;
    Solution sol;
    cout << sol.sum(num1, num2);
    return 0;
    // Для виведення векторів
    /*vector<int> nums = { 0, 2, 1, 5, 3, 4 };
    Solution sol = Solution();
    vector<int> res = sol.buildArray(nums);
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << std::endl;
    }*/
}