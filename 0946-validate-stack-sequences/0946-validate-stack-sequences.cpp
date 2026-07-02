class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> st;
        int r=0;
        for(auto x:pushed){
            st.push(x);
            while(!st.empty()&&st.top()==popped[r]){
                st.pop();
                r++;
            }
        }
        return st.empty();
    }
};