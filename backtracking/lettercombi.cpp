class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> result;
        if(digits.empty()) return result;
        unordered_map<char, string> mp={
            {'2',"abc"},
            {'3', "def"},
            {'4', "ghi"},
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "pqrs"},
            {'8', "tuv"},
            {'9', "wxyz"}

        };  
        func(digits, 0, "",result, mp);
        return result;          
    }
    void func(const string &digits, int idx, string comb, vector<string> &result, const unordered_map<char, string> &mp){
        if(idx == digits.length()) {
            result.push_back(comb);
            return;
        }
        string letters = mp.at(digits[idx]);
        for(char l : letters){
            func(digits, idx+1, comb+l, result, mp);
        }
    }
};
