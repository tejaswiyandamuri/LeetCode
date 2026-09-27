class Solution {
public:
    string reverseParentheses(string s) {
        stack<string> st;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]=='('){
                string word="";
                while(!st.empty()&&st.top()!=")"){
                    word+=st.top();
                    st.pop();
                }
                if(!st.empty())st.pop();
                reverse(word.begin(),word.end());
                st.push(word);
            }
            else{
                string x;
                x=s[i];
                st.push(x);
            }
        }
        string res="";
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        return res;
    }
};