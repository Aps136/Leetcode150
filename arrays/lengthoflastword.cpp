class Solution {
public:
    int lengthOfLastWord(string s) {
        int len =0;
        for(int i=s.size()-1;i>=0;i--){//counting not started, encountered a space, skip
            if(s[i]==' ' && len ==0)
                continue;
            else if(s[i]==' '&& len>0){//started counting, encounterd space, then stop
                break;
            }else{
                len++; //counts length of last word in string
            }
        }return len;
    }
};
