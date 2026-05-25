class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long res=0,sum=0;
        unordered_map<int,int> freq;
        int l=0,r=0;
        while(r<nums.size()){
            sum+=nums[r];
            freq[nums[r]]++;
            while(freq[nums[r]]>1){
                sum-=nums[l];
                freq[nums[l++]]--;
            }
            while(r-l+1>k){
                sum-=nums[l];
                freq[nums[l++]]--;
            }
            if(r-l+1==k)
                res=max(res,sum);
            r++;
        }
        return res;
    }
};