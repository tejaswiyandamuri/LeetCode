class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int n=nums.size();
        vector<int> sm(n);
        sm[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            sm[i]=min(sm[i-1],nums[i]);
        }
        stack<int> st;
        for(int i=n-1;i>=0;i--){
            if(sm[i]==nums[i])
                continue;
            while(!st.empty()&&st.top()<=sm[i])
                st.pop();
            if(!st.empty()&&st.top()<nums[i])
                return true;
            st.push(nums[i]);
        }
        return false;
    }
};