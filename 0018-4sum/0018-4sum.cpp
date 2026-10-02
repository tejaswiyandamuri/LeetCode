class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set<vector<int>> res;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int l=j+1,r=n-1;
                long long t=(long long)target-(long long)(nums[i]+nums[j]);
                while(l<r){
                    if((long long)nums[l]+nums[r]==t){
                        res.insert({nums[i],nums[j],nums[l],nums[r]});
                        l++;r--;
                    }else if(nums[l]+nums[r]>t)r--;
                    else l++;
                }
            }
        }
        vector<vector<int>> ans;
        for(auto x:res)
            ans.push_back(x);
        return ans;
    }
};