class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int res=0,r=nums.size()-1;
        unordered_map<int,int> freq;
        for(auto x:nums)
            freq[x]++;
        // sort(nums.begin(),nums.end());
        for(int i=0;i<(r+1);i++){
            if(freq[k-nums[i]]>0){
                int x=0;
                if(nums[i]!=k-nums[i])
                    x=min(freq[nums[i]],freq[k-nums[i]]);
                else
                    x=freq[nums[i]]/2;
                res+=x;
                freq[k-nums[i]]-=x;
                freq[nums[i]]-=x;
            }
        }
        return res;
    }
};