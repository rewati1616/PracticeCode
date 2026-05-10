#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};

        vector<string> keypad = {
            "", "", "abc", "def", "ghi", "jkl",
            "mno", "pqrs", "tuv", "wxyz"
        };

        vector<string> result;
        string current = "";

        backtrack(digits, 0, keypad, current, result);
        return result;
    }

private:
    void backtrack(string &digits, int index,
                   vector<string> &keypad,
                   string &current,
                   vector<string> &result) {

        if (index == digits.size()) {
            result.push_back(current);
            return;
        }

        int digit = digits[index] - '0';
        string letters = keypad[digit];

        for (char c : letters) {
            current.push_back(c);
            backtrack(digits, index + 1, keypad, current, result);
            current.pop_back(); // backtrack
        }
    }
};

// ________driver code_________
int main() {
    Solution obj;

    string digits;
    cout << "Enter digits: ";
    cin >> digits;

    vector<string> ans = obj.letterCombinations(digits);

    cout << "Combinations:\n";
    for (string &s : ans) {
        cout << s << " ";
    }
    cout << endl;

    return 0;
}
