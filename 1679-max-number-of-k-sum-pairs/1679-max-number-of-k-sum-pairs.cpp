class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int res=0,l=0,r=nums.size()-1;
        unordered_map<int,int> freq;
        sort(nums.begin(),nums.end());
        while(l<r){
            if(nums[l]+nums[r]==k){
                res++;
                l++;
                r--;
            }
            else if(nums[l]+nums[r]>k){
                r--;
            }
            else
                l++;
        }
        return res;
    }
};