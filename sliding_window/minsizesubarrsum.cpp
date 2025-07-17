class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
       int i=0;
       int j=0;
       int sum =0;
       int minn = INT_MAX;
       while(j<nums.size()){
        sum+=nums[j];
        while(sum>=target){
            sum-=nums[i];
            minn = min(j-i+1,minn);
            i++;
        }j++;
       }
       if(minn ==INT_MAX)
            return 0;
        return minn;
    }
};
