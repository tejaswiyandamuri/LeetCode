class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(),
             [](vector<int>& a, vector<int>& b) {
                 if (a[0] == b[0])
                     return a[1] > b[1];
                 return a[0] < b[0];
             });
        vector<vector<int>> x;
        x.push_back(intervals[0]);
        for(int i=1;i<intervals.size();i++){
            int xs=x.size();
            if(!(intervals[i][0]>=x[xs-1][0]&&intervals[i][1]<=x[xs-1][1]))
                x.push_back(intervals[i]);
        }
        return x.size();
    }
};