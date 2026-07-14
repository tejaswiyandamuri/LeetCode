class Solution {
public:
    int findMin(vector<int>& nums) {
        int res=INT_MAX,l=0,r=nums.size()-1;
        while(l<=r){
            int mid=(l+r)/2;
            res=min(nums[mid],res);
            if(nums[l]<=nums[mid]){
                res=min(nums[l],res);
                l=mid+1;
            }else{
                res=min(nums[mid],res);
                r=mid-1;
            }
        }
        return res;
    }
};