class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> k1;
        
        for(char c: magazine){
            k1[c]++;
        }
        for(char c: ransomNote){
            if(k1[c]<=0){//all occurences of c have alrady been used 
                return false;
            }
            k1[c]--;
        }return true;
    }
};
