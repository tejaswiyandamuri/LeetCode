class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n2=nums2.size(),n1=nums1.size();
        vector<int> res(n1);
        unordered_map<int,int> temp;
        stack<int> st;
        for(int i=n2-1;i>=0;i--){
            while(!st.empty()&&st.top()<=nums2[i])
                st.pop();
            (!st.empty())?temp[nums2[i]]=st.top():temp[nums2[i]]=-1;
            st.push(nums2[i]);    
        }
        for(int i=0;i<n1;i++){
            res[i]=temp[nums1[i]];
        }
        return res;
    }
};