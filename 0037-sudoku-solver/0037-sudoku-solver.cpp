class Solution {
public:
    bool solve(vector<vector<char>>& b,int i,int j){
        if(i==9)return true;
        if(j==9)
            return solve(b,i+1,0);
        if(b[i][j]!='.') return solve(b,i,j+1);
        vector<bool> valid(10,true);
        for(int l=0;l<9;l++){
            if(b[i][l]!='.')valid[b[i][l]-'0']=false;
            if(b[l][j]!='.')valid[b[l][j]-'0']=false;
        }
        int x=(i/3)*3,y=(j/3)*3;
        for(int m=x;m<=x+2;m++){
            for(int n=y;n<=y+2;n++)
                if(b[m][n]!='.')valid[b[m][n]-'0']=false;
        }
        for(int p=1;p<10;p++){
            if(!valid[p])continue;
            b[i][j]=p+'0';
            if(solve(b,i,j+1))return true;
            b[i][j]='.';
        }
        return false;
    }
    void solveSudoku(vector<vector<char>>& board) {
        bool x=solve(board,0,0);
    }
};