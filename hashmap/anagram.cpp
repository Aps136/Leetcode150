class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        unordered_map<char, int> count;
        for(char x: s){
            count[x] = count[x]+1;
        }
        for(char y: t){
           if(count.find(y)==count.end()|| count[y]==0) return false;
           count[ch]=count[ch]-1;
        }
        return true;
        
    }
};
