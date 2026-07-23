class Solution {
public:
    bool checkRow(vector<vector<char>>& b, int r, int c) {
        for (int i = 0; i < 9; i++) {
            if(i==c)
                continue;
            if (b[r][c] == b[r][i])
                return false;
        }
        return true;
    }
    bool checkCol(vector<vector<char>>& b, int r, int c) {
        for (int i = 0; i < 9; i++) {
            if(i==r)
                continue;
            if (b[r][c] == b[i][c])
                return false;
        }
        return true;
    }
    bool checkBox(vector<vector<char>>& b, int r, int c) {
        // max
        int rn=(r/3)*3,cn=(c/3)*3;
        for (int i = rn; i < rn+3; i++) {
            for (int j = cn; j < cn+3; j++) {
                if(i==r&&j==c)
                    continue;
                if(b[r][c] == b[i][j])
                    return false;
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if(board[i][j]=='.')
                    continue;
                if(!(checkRow(board,i,j)&&checkCol(board,i,j)&&checkBox(board,i,j)))
                    return false;
            }
        }
        return true;
    }
};