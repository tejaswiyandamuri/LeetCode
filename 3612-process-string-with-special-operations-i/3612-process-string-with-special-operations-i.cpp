class Solution {
public:
    string processStr(string s) {
        string res;
        for(auto x:s){
            if(x=='#')
                res+=res;
            else if(x=='%')
                reverse(res.begin(),res.end());
            else if(x=='*'){
                int s=res.size();
                if(s!=0){
                   res.pop_back();
                }
            }
            else
                res+=x;
        }
        return res;
    }
};