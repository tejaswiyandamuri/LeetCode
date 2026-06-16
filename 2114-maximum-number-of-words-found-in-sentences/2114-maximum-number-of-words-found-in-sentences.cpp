class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int res=INT_MIN;
        for(auto s:sentences){
            int cnt=0;
            for(int i=0;i<s.length();i++){
                if(s[i]==' ')
                    cnt++;
            }
            res=max(res,cnt+1);
        }
        return res;
    }
};