class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res=0;
        for(int i=0;i<s.size();i++){
            unordered_map<char,int> freq;
            for(int j=i;j<s.size();j++){
                freq[s[j]]++;
                if(freq[s[j]]>1)
                    break;
                else
                    res=max(res,j-i+1);
            }
        }
        return res;
    }
};