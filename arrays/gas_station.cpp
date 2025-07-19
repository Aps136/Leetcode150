class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totgas=0, totcost=0;
        for(int i=0;i<gas.size();++i){
            totgas+=gas[i];
            totcost+=cost[i];
        }
        if(totgas<totcost)//check if tot gas available is less than total cost required
            return -1;
        int curgas =0;
        int start=0;
        for(int i=0;i<gas.size();i++){
            curgas+=gas[i]-cost[i];
            if(curgas<0){
                curgas=0;
                start =i+1;
            }
        }return start;
    }
};
