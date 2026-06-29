class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int res=0;
        for(auto x:patterns){
            if(word.contains(x))
                res++;
        }   
        return res;
    }
};