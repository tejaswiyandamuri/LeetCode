class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
       int n=arr.size(),mod=1000000007;
       vector<int> nse(n,n);
       stack<int> st;
       long long res=0;
       for(int i=n-1;i>=0;i--){
            while(!st.empty()&&arr[st.top()]>arr[i])
                st.pop();
            nse[i]=st.empty()?n:st.top();
            st.push(i);
       }
       st={};
       int pse=-1;
       for(int i=0;i<n;i++){
            while(!st.empty()&&arr[st.top()]>=arr[i])
                    st.pop();
            pse=(st.empty())?-1:st.top();
            st.push(i);
            int left=i-pse,right=nse[i]-i;
           res = (res + 1LL * arr[i] * left * right) % mod;
       }
       return res%mod;
    }
};
//  stack<int> st;
//         int res=0;
//         vector<int> 
//         for(int i=0;i<arr.size();i++){
//             res+=arr[i];
//             while(!st.empty()&&arr[st.top()]>arr[i]){
//                 res+=arr[i];
//                 st.pop();
//             }
//             res+=(st.empty())?arr[i]:arr[st.top()];
//             st.push(i);
//         }
//         return res;