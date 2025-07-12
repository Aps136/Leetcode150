class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,int> idxs;
        unordered_map<char,int> idxt;
        for(int i=0;i<s.length();++i){
            if(idxs.find(s[i])==idxs.end()){//if ch not in the map, add it
                idxs[s[i]]=i;

            }
            if(idxt.find(t[i])==idxt.end()){
                idxt[t[i]]=i;
            }
            if(idxs[s[i]]!=idxt[t[i]]){//check if index of current ch from s matches corresponding ch in t
                return false;
            }
        }return true;
        
    }
};
