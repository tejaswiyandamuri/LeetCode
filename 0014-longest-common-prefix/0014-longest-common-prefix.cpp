class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res="";
        int n=INT_MAX;
        for(auto x:strs){
            int xs=x.size();
            n=min(n,xs);
        }
        string word=strs[0];
        for(int i=0;i<n;i++){
            for(auto x:strs){
                if(x[i]!=word[i]){
                    return res;
                }
            }
            res+=word[i];
        }
        return res;
    }
};