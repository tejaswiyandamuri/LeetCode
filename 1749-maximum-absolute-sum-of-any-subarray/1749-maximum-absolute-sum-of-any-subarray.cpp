class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int max_sum=INT_MIN,min_sum=INT_MAX,tx=0,tn=0;
        for(int i=0;i<nums.size();i++){
            tx=max(nums[i],nums[i]+tx);
            max_sum=max(max_sum,tx);
            tn=min(nums[i],nums[i]+tn);
            min_sum=min(min_sum,tn);            
        }
        return max(max_sum,abs(min_sum));
    }
};