class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        string res="";
        for(auto c:s){
            bool x=true;
            while(!st.empty()&&c==st.top()){
                st.pop();
                x=false;
            }
            if(x)
                st.push(c);
        }
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};