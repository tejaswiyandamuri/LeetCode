
class Solution {
public:
    vector<long long> resultArray(vector<int>& nums, int k) {
        int n = nums.size();
        vector<long long> res(k, 0);
        vector<int> dp(k,0);
        for (int i = 0; i < n; i++) {
            vector<int> ndp(k,0);
            ndp[nums[i]%k]=1;    
            for(int r=0;r<k;r++){
                if(dp[r]>0){
                    int x=(r*(nums[i]%k))%k;
                    ndp[x]+=dp[r];
                }
            }
            for(int r=0;r<k;r++)
                res[r]+=ndp[r];
            dp=ndp;
        }
        return res;
    }
};
