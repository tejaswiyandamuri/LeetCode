class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        res.push_back({1});
        for(int i=1;i<numRows;i++){
            int prev=res[i-1].size();
            vector<int> r;
            r.push_back(1);
            for(int j=1;j<prev;j++)
                r.push_back(res[i-1][j-1]+res[i-1][j]);
            r.push_back(1);
            res.push_back(r);
        }
        return res;
    }
};