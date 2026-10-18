class Solution {
public:
    int minDeletions(vector<int>& nums) {
        int res=nums.size(),prev=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]==prev)res--;
            else
                prev=nums[i];
        }
        return nums.size()-res;
    }
};