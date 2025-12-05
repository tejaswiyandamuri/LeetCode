class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int total=0,prefix=0,res=0;
        for(auto num:nums)
            total+=num;
        for(int i=0;i<nums.size()-1;i++){
            prefix+=nums[i];
            int suffix=total-prefix;
            if((prefix-suffix)%2==0)
                res++;
        }
        return res;
    }
};