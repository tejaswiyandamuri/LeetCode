class Solution {
public:
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
        int i=0,j=0,n=grid.size(),m=grid[0].size();
        int ri=0,rj=0;
        while(i>=0&&j>=0&&i<n&&j<m){
            if((grid[i][j]=='x')||((i<0||j<0||i>=n||j>=m)))return {ri,rj};
            else{
                ri=i,rj=j;
                char d=grid[i][j];
                grid[i][j]='x';
                if(d=='R')j=j+1;
                else if(d=='D')i=i+1;
                else if(d=='U')i=i-1;
                else j=j-1;
            }
        }
        return {ri,rj};
    }
};