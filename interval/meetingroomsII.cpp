/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    int minMeetingRooms(vector<Interval>& intervals) {
        int c=0;
        vector<int> st;
        vector<int> ti;
        for(const auto &p : intervals){
            st.push_back(p.start);
            ti.push_back(p.end);
        }
        sort(st.begin(),st.end());
        sort(ti.begin(),ti.end());
        int res=0;
        int s=0;
        int e=0;
        while(s<intervals.size()){
            if(st[s]<ti[e]){
                s++;
                c++;
            }else{
                e++;
                c--;
            }
            res= max(res, c);
        }return res;
        
    }
};
