class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int res=0;
        unordered_map<int,int> prefix_freq;
        int prefix=0;
        prefix_freq[0]=1;
        for(auto num:nums){
            prefix+=(num%2);
            res+=(prefix_freq[prefix-k]);
            prefix_freq[prefix]++;
        }
        return res;
    }
};