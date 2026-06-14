class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int col=matrix[0].size(),row=matrix.size();
        vector<int> hist(col,0);
        int res=0;
        for(int i=0;i<col;i++)
            hist[i]=(matrix[0][i]=='1')?1:0;
        for(int i=0;i<row;i++){
            vector<int> nse(col);
            stack<int> st;
            int pse;
            for(int j=col-1;j>=0;j--){
                while(!st.empty()&&hist[st.top()]>=hist[j])
                    st.pop();
                nse[j]=(st.empty())?col:st.top();
                st.push(j);
            }
            st={};
            for(int j=0;j<col;j++){
                while(!st.empty()&&hist[st.top()]>=hist[j])
                    st.pop();
                pse=(st.empty())?-1:st.top();
                st.push(j);
                res=max(res,hist[j]*(nse[j]-pse-1));
            }
            if(i<row-1){
                for(int k=0;k<col;k++){
                    int val=(matrix[i+1][k]=='0')?0:1;
                    hist[k]=val==1?hist[k]+1:0;
                }
            }
        }
        return res;
    }
};