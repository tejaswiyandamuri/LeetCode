class Solution {
public:
    int minPathSum(vector<vector<int>>& oG) {
        int m=oG.size();
        int n=oG[0].size();
        bool o=false;
        for(int i=1;i<n;i++){
            oG[0][i]+=oG[0][i-1];
        }
         for(int i=1;i<m;i++){
            oG[i][0]+=oG[i-1][0];
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                oG[i][j]+=min(oG[i-1][j],oG[i][j-1]);
            }
        }
        return oG[m-1][n-1];
    }
};