class Solution {
public:

    string encode(vector<string>& strs) {
        string res;
        for(const string &s: strs){
            res+=to_string(s.size())+"#"+s;
        }return res;
        

    }

    vector<string> decode(string s) {
        vector<string> res;
        int i=0;
        while(i<s.size()){
            int j=i;
            while(s[j]!='#'){
                j++;
            }
            int l = stoi(s.substr(i,j-i));
            i=j+1;
            j=i+l;
            res.push_back(s.substr(i,l));
            i=j;
        }return res;
    }
};
