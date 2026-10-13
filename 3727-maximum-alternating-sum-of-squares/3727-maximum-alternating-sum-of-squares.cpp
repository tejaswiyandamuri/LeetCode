class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
            nums[i]=abs(nums[i]);
        sort(nums.begin(),nums.end());
        long long left=0,right=0,n=nums.size();
        for(int i=0;i<n;i++){
            if(i<n/2)left+=(nums[i]*nums[i]);
            else right+=(nums[i]*nums[i]);
        }   
        return right-left;
    }
};