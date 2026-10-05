class Solution {
public:
    int countSubstrings(string s) {
        vector<string> res;
        int l,r;
        int n=s.length();
        for(int i=0;i<s.length();i++){
            l = i;
            r = i;
            while (l >= 0 && r < n && s[l] == s[r]) {
               res.push_back(s.substr(l,r-l+1));
                r++;
                l--;
            }
            l = i;
            r = i + 1;
            while (l >= 0 && r < n && s[l] == s[r]) {
                res.push_back(s.substr(l,r-l+1));
                l--;
                r++;
            }
        }
        return res.size();
    }
};