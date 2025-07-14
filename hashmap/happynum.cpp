class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> visit;
        while(visit.find(n)==visit.end()){
            visit.insert(n);
            n=getnext(n);
            if(n==1){
                return true;
            }

        }return false;
         
    }
private:
int getnext(int n){
    int out=0;
    while(n>0){
        int dig= n%10;
        out+=dig*dig;
        n=n/10;
    }return out;
}
};
