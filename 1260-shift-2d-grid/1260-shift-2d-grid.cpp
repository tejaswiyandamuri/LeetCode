class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        vector<int> arr;
        for(auto x:grid){
            for(auto val:x)
                arr.push_back(val);
        }
        k=k%(arr.size());
        reverse(arr.begin(),arr.end());
        reverse(arr.begin(),arr.begin()+k);
        reverse(arr.begin()+k,arr.end());
        int x=0;
        vector<vector<int>> res;
        for(int i=0;i<grid.size();i++){
            res.push_back({});
            for(int j=0;j<grid[i].size();j++)
                res[i].push_back(arr[x++]);
        }
        return res;
    }
};