#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<string> ans;

    void solve(int index, string digits, string output, vector<string>& mapping) {

        // Base case
        if (index >= digits.length()) {
            ans.push_back(output);
            return;
        }

        int number = digits[index] - '0';
        string value = mapping[number];

        for (int i = 0; i < value.length(); i++) {
            output.push_back(value[i]);

            solve(index + 1, digits, output, mapping);

            // Backtracking
            output.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {

        if (digits.length() == 0) {
            return {};
        }

        vector<string> mapping(10);

        mapping[2] = "abc";
        mapping[3] = "def";
        mapping[4] = "ghi";
        mapping[5] = "jkl";
        mapping[6] = "mno";
        mapping[7] = "pqrs";
        mapping[8] = "tuv";
        mapping[9] = "wxyz";

        string output = "";

        solve(0, digits, output, mapping);

        return ans;
    }
};

int main() {

    Solution obj;

    string digits = "23";

    vector<string> result = obj.letterCombinations(digits);

    for (string str : result) {
        cout << str << " ";
    }

    return 0;
}
