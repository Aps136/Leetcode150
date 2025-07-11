class Solution {
public:
    bool isSubsequence(string s, string t) {
       int sc=0;
       int tc=0;
       while(sc<s.length() && tc<t.length()){
          if(s[sc]==t[tc]){
            sc++;
          }
          tc++;
       }
       return sc==s.length();
    
    }
};
