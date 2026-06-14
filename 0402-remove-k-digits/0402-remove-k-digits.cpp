class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<int> st;
        int j=0;
        string res="";
        for(int i=0;i<num.size();i++){
            while(!st.empty()&&j<k&&st.top()-'0'>num[i]-'0'){
                st.pop();
                j++;
            }
            st.push(num[i]);
        }
        while(j<k&&!st.empty()){
            st.pop();
            j++;
        }
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        int i=0;
        while(i<res.size()&&res[i]=='0')
            res.erase(i,1); 
        return res==""?"0":res;      
    }
};