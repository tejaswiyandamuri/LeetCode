class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int> res;
        for(auto x:nums){
            mp[x]++;
            if(mp[x]>1)
                res.push_back(x);
        }
        return res;
    }
};