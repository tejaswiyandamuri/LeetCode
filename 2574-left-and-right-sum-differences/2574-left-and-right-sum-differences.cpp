class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int total=accumulate(nums.begin(),nums.end(),0);
        int n=nums.size(),left=0;
        vector<int> res(n,0);
        for(int i=0;i<n;i++){
            int right=total-left-nums[i];
            res[i]=(abs(left-right));
            left+=nums[i];
        }
        return res;
    }
};