class Solution {
public:
    int minMoves(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       int n=nums.size(),mini=nums[0];
       int res=0;
       for(int i=0;i<n;i++)
            res+=max(nums[i]-mini,0);
       return res;
    }
};