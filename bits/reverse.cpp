class Solution {
public:
    int bintonum(string k){
        long long power =1;
        long long ans=0;
        for(int i=k.length()-1;i>=0;i--){
            if(k[i]=='1'){
                ans+=power;
            }
            power*=2;
        }
        return ans;
    }
    int reverseBits(int n) {
        string s = "";
        for(int i=0;i<32;i++){
            s+= to_string(n&1);
            n>>=1;
        }
        return bintonum(s);
    }
};
