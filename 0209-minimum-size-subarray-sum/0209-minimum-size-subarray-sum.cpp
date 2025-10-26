class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int res=INT_MAX;
        int r=0,l=0;
        long prefix=0;
        while(r<nums.size()){
            prefix+=nums[r];
            while(prefix>=target&&l<=r){
                res=min(res,r-l+1);
                prefix-=nums[l++];
            }
            r++;
        }
        return res==INT_MAX?0:res;
    }
};