class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        string pref= strs[0];
        int prefl = pref.length();
        for(int i=1;i<strs.size();i++){
            string s = strs[i];
            while(prefl > s.length()|| pref != s.substr(0,prefl)){
                prefl--;
                if(prefl==0){
                    return "";
                }
                pref=pref.substr(0,prefl);
            }
        }return pref;

      

    }
};
