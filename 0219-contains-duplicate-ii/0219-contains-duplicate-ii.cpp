class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int l=0;
        unordered_map<int,int> freq;
        for(int r=0;r<nums.size();r++){
            freq[nums[r]]++;
            while(freq[nums[r]]>1){
                if(nums[l]==nums[r]&&(r-l<=k))
                    return true;
                freq[nums[l]]--;
                l++;
            }
        }
        return false;
    }
};