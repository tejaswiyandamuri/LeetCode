class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n=nums.size(),sum=0;
        unordered_map<int,int> mp;
        mp[0]=-1;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            int x=sum%k;
            if(mp.count(x)){
                if(i-mp[x]>1)
                    return true;
            }else
                mp[x]=i;
        }
        return false;
    }
};