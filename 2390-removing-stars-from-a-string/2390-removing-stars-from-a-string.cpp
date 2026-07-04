class Solution {
public:
    string removeStars(string s) {
        string res="";
        stack<char> st;
        for(int i=s.length()-1;i>=0;i--){
            char x=s[i];
            if(!st.empty()&&x!='*'&&st.top()=='*')
                st.pop();
            else
                st.push(x);
        }
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        return res;
    }
};