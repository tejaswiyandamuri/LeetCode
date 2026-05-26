class Solution {
public:
    int numberOfSpecialChars(string word) {
        int res=0;
        unordered_map<int,int> freq;
        vector<int> checked(26,0);
        for(auto x: word){
            freq[x]++;
            char small=tolower(x);
            if((freq[x-32]>0||freq[x+32]>0)&&(checked[small-'a']==0)){
                res++;
                checked[small-'a']=1;
            }
        }
        return res++;
    }
};