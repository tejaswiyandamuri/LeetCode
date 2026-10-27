class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> res;
        for(int i=0;i<m;i++){
            string row="";
            for(int j=0;j<n;j++){
                if(j==0||i==m-1)row+=".";
                else row+="#";
            }
            res.push_back(row);
        }
        return res;
    }
};