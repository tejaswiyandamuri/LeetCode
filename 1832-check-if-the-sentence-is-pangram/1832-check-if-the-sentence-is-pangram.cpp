class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<bool> seen(26,false);
        for(auto x:sentence)
            seen[x-'a']=true;
        for(int i=0;i<26;i++){
            if(!seen[i])
                return false;
        }
        return true;
    }
};