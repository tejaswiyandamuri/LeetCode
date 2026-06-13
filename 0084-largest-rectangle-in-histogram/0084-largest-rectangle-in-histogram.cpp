class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int res=INT_MIN,n=heights.size();
        stack<int> st;
        vector<int> nse(n,n);
        for(int i=n-1;i>=0;i--){
            while(!st.empty()&&heights[st.top()]>=heights[i])
                st.pop();
            nse[i]=(st.empty())?n:st.top();
            st.push(i);
        }
        st={};
        for(int i=0;i<n;i++){
            while(!st.empty()&&heights[st.top()]>=heights[i])
                st.pop();
            int pse=st.empty()?-1:st.top();
            st.push(i);
            int area=heights[i]*(nse[i]-pse-1);
            res=max(res,area);
        }
        return res;
    }
};