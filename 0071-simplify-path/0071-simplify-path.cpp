class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;
        string s="";

        for(int i=0;i<=path.size();i++){
            if(i==path.size()||path[i]=='/'){
                if(s==".."){
                    if(!st.empty())
                        st.pop();
                }
                else if(s!=""&&s!=".")
                    st.push(s);

                s="";
            }
            else
                s+=path[i];
        }

        string res="";

        while(!st.empty()){
            res="/"+st.top()+res;
            st.pop();
        }

        if(res=="")
            return "/";

        return res;
    }
};