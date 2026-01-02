class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n=(nums.size()/2);
        unordered_map<int,int> freq;
        for(auto num:nums)
            freq[num]++;
        for(auto &ele:freq)
            if(ele.second==n) return ele.first; 
        return 0;
    }
};