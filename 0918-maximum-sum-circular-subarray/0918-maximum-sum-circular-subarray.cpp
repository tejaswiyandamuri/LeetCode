class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int max_normal=INT_MIN,min_subarray=INT_MAX,
            cur_max_sum=0,cur_min_sum=0,total=0;
        for(int i=0;i<nums.size();i++){
            cur_max_sum=max(cur_max_sum+nums[i],nums[i]);
            max_normal=max(max_normal,cur_max_sum);
            cur_min_sum=min(cur_min_sum+nums[i],nums[i]);
            min_subarray=min(min_subarray,cur_min_sum);
            total+=nums[i];
        }
        if(min_subarray==total)
            return max_normal;
        return max(max_normal,total-min_subarray);
    }
};