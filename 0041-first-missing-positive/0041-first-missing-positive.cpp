class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            while((nums[i]<n&&nums[i]>=1)&&(nums[nums[i]-1]!=nums[i]))
                swap(nums[i],nums[nums[i]-1]);
        }
        int i;
        for(i=0;i<nums.size();i++){
            cout<<nums[i];
            if(nums[i]!=i+1)
                return i+1;
        }
        return i+1;
    }
};