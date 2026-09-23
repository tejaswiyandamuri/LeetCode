class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        unordered_map<long long, int> mp;
        int res=INT_MAX;
        mp[0]=-1;
        long long sum=0;
        for(int i=nums.size()-1;i>=0;i--){
            sum+=nums[i];
            mp[sum]=i;
        }
        int n=nums.size();
        long long prefix=0;
        if(mp.find(x)!=mp.end())
            res=min(res,n-mp[x]);
        for(int i=0;i<nums.size()&&prefix<x;i++){
            prefix+=nums[i];
            if(prefix==x)
                res=min(res,i+1);
            if(mp.find(x-prefix)!=mp.end()&&mp[x-prefix]>i){
                res=min(res,n-(mp[x-prefix]-i-1));
            }
        }
        return res==INT_MAX?-1:res;
    }
};