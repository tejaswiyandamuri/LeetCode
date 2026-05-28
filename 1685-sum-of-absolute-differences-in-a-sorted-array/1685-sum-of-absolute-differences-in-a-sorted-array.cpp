class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n=nums.size(),prefix=0;
        vector<int> suffix(n),res(n);
        suffix[n-1]=0;
        for(int i=n-2;i>=0;i--)
            suffix[i]=nums[i+1]+suffix[i+1];
        for(int i=0;i<nums.size();i++){
            res[i]=abs(prefix-nums[i]*i)+(abs(nums[i]*(n-1-i)-suffix[i]));
            prefix+=nums[i];
        }
        return res;
    }
};