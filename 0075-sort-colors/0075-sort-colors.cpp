class Solution {
public:
    void sortColors(vector<int>& nums) {
        int z=0,t=nums.size()-1,p=0;
        if(t==0)
            return;
        while(p<=t){
            if(nums[p]==0)
                swap(nums[p++],nums[z++]);
            else if(nums[p]==2)
                swap(nums[p],nums[t--]);
            else
                p++;
        }
    }
};