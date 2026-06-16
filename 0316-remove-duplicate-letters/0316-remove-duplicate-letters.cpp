class Solution {
public:
    string removeDuplicateLetters(string s) {
        stack<char> st;
        unordered_map<int,int> global,onrun,st_freq;
        for(auto x:s)
            global[x]++;
        for(auto x:s){
            global[x]--;
            if(st_freq[x]>0&&(!st.empty()&&st.top()!=x))
                continue;
            while(!st.empty()&&st.top()>x){
                if(global[st.top()]>0){
                    st_freq[st.top()]==0?0:st_freq[st.top()]--;
                    st.pop();
                }
                else
                    break;
            }
            if(st_freq[x]==0){
                st.push(x);
                st_freq[x]++;
            }
        }
        string res;
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};