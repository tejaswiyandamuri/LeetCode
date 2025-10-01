class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,char> check;
        check['{']='}';
        check['(']=')';
        check['[']=']';
        stack<char> st;
        for(auto ch:s){
            if(ch!='}'&&ch!=')'&&ch!=']')
                st.push(ch);
            else{
                if(!st.empty()&&check[st.top()]==ch)
                    st.pop();
                else
                    return false;
            }
        }
        return st.empty();
    }
};