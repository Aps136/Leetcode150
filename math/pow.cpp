class Solution {
public:
    double myPow(double num, int power) {
        if(power==0) return 1;
        double ans = 1.0;
        long temp = power;
        if(temp<0){
            num = 1/num;
            temp = -temp;
        }
        while(temp!=0){
            if(temp%2==0){
                num = num*num;
                temp/=2;
            }else{
                ans *=num;
                temp= temp-1;
            }
        }return ans;
        
    }
};
