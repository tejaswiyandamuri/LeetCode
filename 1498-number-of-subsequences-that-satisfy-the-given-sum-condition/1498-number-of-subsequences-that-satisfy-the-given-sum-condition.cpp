class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        int mod=1000000007;
        int res=0,l=0,r=nums.size()-1;
        sort(nums.begin(),nums.end());
        int power[r+1];
        power[0] = 1;
        for (int i = 1; i <= r; i++) {
            power[i] = (power[i - 1] * 2) % mod;
        }
        while(l<=r){
            if(nums[l]+nums[r]<=target){
                res=(res+power[r-l])%mod;
                l++;
            }
            else
                r--;
        }
        return res;
    }
};