class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.empty()) return {};
        vector<vector<int>> merged;
        sort(intervals.begin(),intervals.end(),[](const vector<int> &x,const vector<int> &y){
            return x[0]<y[0];
        });
        merged.push_back(intervals[0]);
        for(int i=1;i<intervals.size();++i){
            vector<int> &last = merged.back();
            const vector<int> &curr = intervals[i];
            if(curr[0]<=last[1]){
                last[1]= max(last[1],curr[1]);
            }else{
                merged.push_back(curr);
            }
        }
        return merged;

    }
};
