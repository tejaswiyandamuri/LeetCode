class Solution {
public:
    string makeGood(string s) {
        stack<int> st;
        for(int i=0;i<s.length();i++){
            if(!st.empty()&&(st.top()==s[i]+32||st.top()==s[i]-32)){
            // while(!st.empty()&&(st.top()==s[i]+32||st.top()==s[i]-32)){
                st.pop();
            }
            else
                st.push(s[i]);
        }
        string res="";
        while(!st.empty()){
            char x=st.top();
            res+=x;
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};