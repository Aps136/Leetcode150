class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        int y =x;
        long k=0;
        while(x!=0){
            long res = x%10;
            k= k*10+res;
            x=x/10;
        }
        return y==k;
    }
};
