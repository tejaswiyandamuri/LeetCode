class Solution {
public:
    int numberOfSubstrings(string s) {
        int res=0;
        unordered_map<char,int> index;
        index['a']=-1;index['b']=-1;index['c']=-1;
       for(int i=0;i<s.size();i++){
            index[s[i]]=i;
            if((index['a']!=-1&&index['b']!=-1)&&(index['c']!=-1)){
                int x=(1+min({index['a'],index['b'],index['c']}));
                res+=x;
            }
       } 
       return res;
    }
};