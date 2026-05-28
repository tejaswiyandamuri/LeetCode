class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int res=0,prefix=0;
        unordered_map<int,int> freq;
        freq[0]=1;
        for(auto n:nums){
            prefix+=n;
            int rem=((prefix%k)+k)%k;
            res+=(freq[rem]);
            freq[rem]++;
        }
        return res;
    }
};