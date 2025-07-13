class Solution {
public:
    bool isValid(string s) {
        stack<char> so;
        unordered_map<char,char> mp={
            {')','('},{']','['},{'}','{'}
        };
        for(char c : s){
            if(mp.count(c)){
                if(!so.empty() && so.top()==mp[c])
                    so.pop();
                else{
                    return false;
                }
            }
            else{
                so.push(c);
            }
        }return so.empty();       
        
    }
};
