class Solution {
public:
    int findMin(vector<int>& nums) {
      int res=nums[0];
      for(auto x:nums){
        res=min(res,x);
      }  
      return res;
    }
};