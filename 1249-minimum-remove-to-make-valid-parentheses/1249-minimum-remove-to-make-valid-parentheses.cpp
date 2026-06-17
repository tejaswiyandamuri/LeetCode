class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> st;
        string res="";
        int res_i=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                st.push(res_i);
                res+=s[i];
                res_i++;
            }
            else if(s[i]==')'){
                if(!st.empty()){
                    st.pop();
                    res+=s[i];
                    res_i++;
                }
            }
            else{
                res+=s[i];
                res_i++;
            }
        }
        while(!st.empty()){
           res.erase(st.top(),1);
           st.pop();
        }
        return res;
    }
};