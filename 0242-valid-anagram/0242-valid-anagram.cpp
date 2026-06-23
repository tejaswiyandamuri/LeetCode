class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())return false;
        unordered_map<char,int> f1,f2;
        for(int i=0;i<s.size();i++){
            f1[s[i]]++;
            f2[t[i]]++;
        }
        for(auto x:s){
            if(f1[x]!=f2[x])
                return false;
        }
        return true;
    }
};