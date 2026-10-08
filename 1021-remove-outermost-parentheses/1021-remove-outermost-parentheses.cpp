class Solution {
public:
    string removeOuterParentheses(string s) {
        string res="";
        int opens=0,l=-1,n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                opens++;
                if(l==-1)l=i;
            }else{
                opens--;
                if(opens==0){
                    res+=s.substr(l+1,i-l-1);
                    l=-1;
                }
            }
        }   
        return res;
    }
};