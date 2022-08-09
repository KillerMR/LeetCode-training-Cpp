#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::cout;
using std::cin;
using std::string;

class Solution {
public:
    string defangIPaddr(string address) {
        string res;
        for (int i = 0; i < address.length(); i++) {
            if (address[i] != '.')
                res += address[i];
            else
                res += "[.]";
        }
        return res;
    }
};

int main() {
    string s = "1.1.1.1";
    Solution sol;
    
    // Для виведення векторів
    string res = sol.defangIPaddr(s);
    cout << res << std::endl;
    /*for (int i = 0; i < res.size(); i++) {
        cout << res[i] << std::endl;
    }*/
    return 0;
}