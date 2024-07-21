class Solution {
public:
    string intToRoman(int num) {
        // Arrays of Roman numerals and their corresponding values
        vector<int> values = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        vector<string> symbols = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

        string ans;

        // Iterate over each value and symbol
        for (int i = 0; i < values.size(); ++i) {
            while (num >= values[i]) {
                num -= values[i];
                ans += symbols[i];
            }
        }

        return ans;
    }
};
