class Solution {
public:
    int dfs(vector<vector<int>>& g,int i,int j,int z,int cur){
        int m=g.size(),n=g[0].size();
        if(g[i][j]==2){
            if(cur==z)return 1;
            return 0;
        }
        if(g[i][j]==-1)return 0;
        int res=0;
        const static vector<int> dx = {-1, 0, 1, 0}, dy = {0, 1, 0, -1};
        g[i][j]=-1;
        for(int d=0;d<4;d++){
            int ni=i+dx[d];
            int nj=j+dy[d];
            if(ni>=0&&nj>=0&&ni<m&&nj<n){
                if(g[ni][nj]==0)
                    res+=dfs(g,ni,nj,z,cur+1);
                else
                   res+=dfs(g,ni,nj,z,cur);
            }  
        }
        g[i][j]=0;
        return res;
    }
    int uniquePathsIII(vector<vector<int>>& grid) {
        int i=0,j=0;
        int x=0,y=0;
        int zeroes=0;
        for( i=0;i<grid.size();i++){
            for(j=0;j<grid[0].size();j++){
                if(grid[i][j]==1)x=i,y=j;
                else if(grid[i][j]==0)zeroes++;
            }
        }
        cout<<zeroes;
        return dfs(grid,x,y,zeroes,0);
    }
};