class Solution {
public:
    bool isittrue(vector<vector<char>>& b, const string &w,int i,int j,int wi){
        if(wi==w.size())return true;
        int m=b.size(),n=b[0].size();
        if(i>=m||i<0||j<0||j>=n||b[i][j]=='#')return false;
        if(w[wi]!=b[i][j])return false;
        const static vector<int> dx={-1,0,1,0},dy={0,1,0,-1};
        auto temp=b[i][j];
        b[i][j]='#';
        for(int d=0;d<4;d++){
            if(isittrue(b,w,i+dx[d],j+dy[d],wi+1))
                return true;
        }
        b[i][j]=temp;
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int m=board.size(),n=board[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(word[0]!=board[i][j])continue;
                if(isittrue(board,word,i,j,0))
                    return true;
            }
        }
        return false;
    }
};