class Solution {
public:
    int numberOfSpecialChars(string word) {
        int res=0;
        unordered_map<int,int> f1,f2;
        vector<bool> flag(26,true);
        for(int i=0;i<word.size();i++){
            if(islower(word[i]))
               f2[word[i]]=i; 
            if(isupper(word[i])&&f1.find(word[i])==f1.end())
                f1[word[i]]=i;
        }
        for(auto l:word){
            char x=tolower(l);
            if(islower(l)){
                if(f2[l]<f1[toupper(l)]&&flag[x-'a']){
                    res++;
                    flag[x-'a']=false;
                }
            }
        }
        return res;
    }
};