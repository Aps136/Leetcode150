class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans =0;
        for(int i=0;i<32;i++){
            int sum =0;//number of ones at current bit position fr all numbers 
            for(const int n: nums){
                sum +=n >>i &1; //extract value of vit position at i, if its 1 then 1 , otherwise 0, sum counts number of ones at bit position i 
            }
            sum %=3;//appears three times, if div by 3 
            ans |= sum<<i;//bit at position i is set to value of sum 
        }
        return ans;
    }
};
