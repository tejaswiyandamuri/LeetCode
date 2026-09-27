class Solution {
public:
    bool isPalindrome(const string &s, int l, int r) {
    while (l < r) {
        if (s[l] != s[r]) return false;
        l++;
        r--;
    }
    return true;
    }
    bool validPalindrome(string s) {
        int n=s.length();
        int l=0,r=n-1;
        bool changed=false;
        while(l<=r){
            if(s[l]!=s[r]){
                if(changed)return false;
                changed=true;
                return isPalindrome(s, l + 1, r) || isPalindrome(s, l, r - 1);
            }else{
            l++;
            r--;
            }
        }
        return true;
    }
};