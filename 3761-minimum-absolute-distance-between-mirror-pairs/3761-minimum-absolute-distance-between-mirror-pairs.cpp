class Solution {
public:
    int reverse(int num) {
        int rev = 0;
        while (num > 0) {
            int rem = num % 10;
            rev = rem + (rev * 10);
            num /= 10;
        }
        return rev;
    }
    int minMirrorPairDistance(vector<int>& nums) {
        int res = INT_MAX;
        unordered_map<int,int> mp;
        mp[reverse(nums[0])]=0;
        for(int i=1;i<nums.size();i++){
            if(mp.count(nums[i])){
                res=min(res,i-mp[nums[i]]);
            }
            mp[reverse(nums[i])]=i;
        }
        return res == INT_MAX ? -1 : res;
    }
};