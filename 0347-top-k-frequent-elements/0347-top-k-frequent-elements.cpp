class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freak;
        for(auto n:nums)
            freak[n]++;
        vector<pair<int,int>> x(freak.begin(),freak.end());
        sort(x.begin(),x.end(),[](const auto& a, const auto& b){
            return a.second>b.second;
        });
        vector<int> res;
        for(auto i=0;i<k;i++){
            res.push_back(x[i].first);
        }

        return res;
    }
};