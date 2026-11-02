class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int res=0,n=nums.size();
        int x=(n%2==0)?(nums[n/2]+nums[(n/2)-1])/2:nums[n/2];
        for(int i=0;i<nums.size();i++){
            res+=abs(x-nums[i]);
        }
        return res;
    }
};