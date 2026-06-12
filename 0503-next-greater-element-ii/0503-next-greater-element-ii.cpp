class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        vector<int> res(n);
        stack<int> st;
        for(int i=n*2-1;i>=0;i--){
            while(!st.empty()&&st.top()<=nums[(i+n)%n])
                st.pop();
            res[(i+n)%n]=!st.empty()?st.top():-1;
            st.push(nums[(i+n)%n]);
        }
        return res;
    }
};