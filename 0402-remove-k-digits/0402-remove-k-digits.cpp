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
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        string x="";
        for(int i=0;i<num.size()-k;i++)
            x+=res[i];
        int i=0;
        while(x[i]=='0')
            x.erase(i,1);
        return x==""?"0":x;
    }
};