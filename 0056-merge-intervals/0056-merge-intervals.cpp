class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> res;
        res.push_back({intervals[0]});
        for(int i=1;i<intervals.size();i++){
            int x=res.size()-1;
            if(res[x][1]>=intervals[i][0]){
                res[x][1]=max(intervals[i][1],res[x][1]);
            }else
                res.push_back(intervals[i]);
        }
        return res;
    }
};