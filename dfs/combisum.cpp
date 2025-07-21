class Solution {
public:
    vector<vector<int>> res;
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {        
        sort(nums.begin(),nums.end());
        dfs(0,{},0,nums,target); // start w index 0, tot 0
        return res;
    }
        
    void dfs(int i, vector<int> cur, int tot, vector<int> &nums, int target){
            if(tot == target){
                res.push_back(cur);
                return;
            }
            for(int j=i;j<nums.size();j++){
                if(tot+nums[j]>target)
                    return;
                cur.push_back(nums[j]);
                dfs(j,cur,tot+nums[j],nums, target);
                cur.pop_back();
            }
        }
    };

