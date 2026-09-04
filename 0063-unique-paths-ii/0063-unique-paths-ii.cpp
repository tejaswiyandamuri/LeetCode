class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& oG) {
        int m=oG.size();
        int n=oG[0].size();
        vector<vector<int>> a(m,vector<int>(n,0));
        bool o=false;
        for(int i=0;i<n;i++){
            if(oG[0][i]==1)break;
            a[0][i]=1;
        }
        for(int i=0;i<m;i++){
            if(oG[i][0]==1)break;
            a[i][0]=1;
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(oG[i][j]==0){
                    a[i][j]=a[i-1][j]+a[i][j-1];
                }
            }
        }
        return a[m-1][n-1];
    }
};