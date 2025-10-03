class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for (auto num : nums) {
            freq[num]++;
        }

        vector<pair<int, int>> sorted;
        for (auto& x : freq) {
            sorted.push_back({x.first, x.second});
        }

        sort(sorted.begin(), sorted.end(), [](pair<int, int>& a, pair<int, int>& b) {
            return a.second > b.second;
        });

        
        vector<int> res;
        for (int i = 0; i < k; ++i) {
            res.push_back(sorted[i].first);
        }

        return res;
    }
};
