class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> f;
        int l=0,res=0;
        for(int r=0;r<s.size();r++){
            f[s[r]]++;
            while(f[s[r]]>1){
                f[s[l]]--;
                l++;
            }
            if(f[s[r]]==1)
                 res=max(res,r-l+1);
        }
        return res;
    }
};