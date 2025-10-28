class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      int l=1;
      int prev=nums[0];
      for(int i=0;i<nums.size();i++){
        if(nums[i]!=prev){
            nums[l]=nums[i];
            l++;
            prev=nums[i];
        }
      }
      return l;
    }
};