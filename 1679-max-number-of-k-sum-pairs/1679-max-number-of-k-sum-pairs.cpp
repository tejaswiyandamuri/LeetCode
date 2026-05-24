class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int res=0,l=0,r=nums.size()-1;
        unordered_map<int,int> freq;
        for(auto x:nums)
            freq[x]++;
        sort(nums.begin(),nums.end());
        while(l<r){
            if(freq[nums[l]]&&freq[nums[r]]&&nums[l]+nums[r]==k){
                res++;
                freq[nums[l++]]--;
                freq[nums[r--]]--;
            }
            else if(nums[l]+nums[r]>k){
                r--;
            }
            else
                l++;
        }
        return res;
    }
};