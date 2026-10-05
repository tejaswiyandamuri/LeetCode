class Solution {
public:
    bool isPalindrome(string s) {
        string x="";
        for(auto ch:s){
            if(isalnum(ch)){
                if(isalpha(ch))x+=tolower(ch);
                else x+=ch;
            }
        }
        cout<<x;
        int l=0,r=x.length()-1;
        while(l<=r){
            if(x[l]!=x[r])return false;
            l++;
            r--;
        }
        return true;
    }
};