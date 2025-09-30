class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> freq;
        int l=0,res=0;
        for(int r=0;r<s.size();r++){
            freq[s[r]]++;
            while(freq[s[r]]>1){
                freq[s[l]]--;
                l++;
                // res=max(res,r-l+1);
            }
            res=max(res,r-l+1);
        }
        return res;
    }
};