class Solution {
public:
    int hIndex(vector<int>& c) {
       int n = c.size();
       vector<int> freq(n+1);
       for(int i=0;i<n;++i){
         if(c[i]>n){
            freq[n]+=1;
         }else{
            freq[c[i]]+=1;
         }
       }
       int idx= n;
       int s = freq[n];
       while(s<idx){
          idx--;
          s+=freq[idx];
       }
       return idx;
    }
};
