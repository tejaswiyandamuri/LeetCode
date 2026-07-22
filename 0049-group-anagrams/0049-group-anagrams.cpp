class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        unordered_map<string,vector<string>> mp;
        vector<vector<string>> res;
        for(int i=0;i<strs.size();i++){
            string cp=strs[i];
            sort(cp.begin(),cp.end());
            mp[cp].push_back(strs[i]);
        }
        for(auto &x:mp)
            res.push_back(x.second);
        return res;
    }
};