class Solution {
public:
    void dfs(string &s,unordered_map<string,int> &m,int i,string cur,string cur_word,vector<string> & res){
        int n=s.size();
        if(i==n){
            if(cur_word=="")
                res.push_back(cur);
            return;
        }
        cur_word+=s[i];
        if(m.find(cur_word)!=m.end()){
            string temp="";
            if(cur=="")temp=cur_word;
            else temp=cur+" "+cur_word;
            dfs(s,m,i+1,temp,"",res);
        }
        dfs(s,m,i+1,cur,cur_word,res);
        return;
    }
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        vector<string> res;
        unordered_map<string,int> mp;
        for(auto x:wordDict)
            mp[x]++;
        string ds="";
        dfs(s,mp,0,ds,ds,res);
        return res;
    }
};