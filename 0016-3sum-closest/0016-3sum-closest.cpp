class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int res=0,dist=INT_MAX;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            int l=i+1,r=nums.size()-1;
            while(l<r){
                int cur_sum=nums[i]+nums[l]+nums[r];
                int cur_distance=abs(target-cur_sum);
                if(dist>cur_distance){
                    dist=cur_distance;
                    res=cur_sum;
                }
                if(cur_sum==target) return target;
                else if(cur_sum<target) l++;
                else r--;
            }
        }
        return res;
    }
};