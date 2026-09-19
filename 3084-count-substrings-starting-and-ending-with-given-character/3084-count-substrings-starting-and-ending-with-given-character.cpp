class Solution {
public:
    long long countSubstrings(string s, char c) {
        long long res=0,cnt=0;
        for(auto x:s){
            if(x==c){
                cnt++;
                res=res+cnt;
            }
        }
        return res;
    }
};