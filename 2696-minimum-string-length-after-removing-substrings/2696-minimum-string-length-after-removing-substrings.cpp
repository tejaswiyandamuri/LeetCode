class Solution {
public:
    int minLength(string s) {
        stack<char> st;
        for(auto x:s){
            if(x=='B'){
                if(!st.empty()&&st.top()=='A')
                    st.pop();
                else
                    st.push(x);
            }
            else if(x=='D'){
                if(!st.empty()&&st.top()=='C')
                    st.pop();
                else
                    st.push(x);
            }
            else
                st.push(x);
        }
        return st.size();
    }
};