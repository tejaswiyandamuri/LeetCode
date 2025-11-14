class Solution {
public:
    int countGoodSubstrings(string s) {
       int res=0;
       for(int i=2;i<s.size();i++){
            // if(i>=2){
                if((s[i-2]!=s[i-1]&&(s[i-2]!=s[i]))&&(s[i-1]!=s[i]))
                    res++;
            // }
       } 
       return res;
    }
};