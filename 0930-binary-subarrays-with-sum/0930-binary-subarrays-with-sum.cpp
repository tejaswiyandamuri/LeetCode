class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
         int sum=0,res=0;
        unordered_map<int,int> freq;
        freq[0]=1;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            res+=freq[sum-goal];
            freq[sum]++;
        }
        return res;
    }
};