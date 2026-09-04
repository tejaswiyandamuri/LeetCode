class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size(),i_score=INT_MAX,res=INT_MAX;
        vector<int> mini(n,0);
        mini[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--)
            mini[i]=min(nums[i],mini[i+1]);
        int max_so_far=nums[0];
        for(int i=0;i<n;i++){
            max_so_far=max(max_so_far,nums[i]);
            i_score=min(i_score,max_so_far-mini[i]);
            if(i_score<=k){
                return i;
            }
        }
        return -1;
    }
};