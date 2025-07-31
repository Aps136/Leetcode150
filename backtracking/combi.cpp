class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> result;
        vector<int> comb;
        backtrack(1,comb,result,n,k);
        return result;
    }
    void backtrack(int start, vector<int> &comb, vector<vector<int>> &result, int n, int k){
        if(comb.size()==k){
            result.push_back(comb);
            return;
        }
        for(int num = start;num<=n;num++){
            comb.push_back(num);
            backtrack(num+1,comb,result,n,k);
            comb.pop_back();
        }
    }
};
