class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> freq;
        for(auto x:s)
            freq[x]++;
        int res=0,odd=0;
        for(auto &x:freq){
            if(x.second%2==0)
                res+=x.second;
            else{
                res+=x.second-1;
                odd=1;
            }
        }
        if(odd)res+=1;
        return res;
    }
};