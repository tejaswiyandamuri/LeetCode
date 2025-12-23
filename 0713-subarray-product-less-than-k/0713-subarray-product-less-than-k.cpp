class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int res=0,l=0,r=0;
        int pro=1;
        while(r<nums.size()){
            pro*=nums[r];
            while(pro>=k&&l<r){
                pro=pro/nums[l];
                l++;
            }
            if(pro<k)
                res+=(r-l+1);
            r++;
        }
        return res;
    }
};