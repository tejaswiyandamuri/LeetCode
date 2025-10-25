class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
            nums[i]=nums[i]==0?-1:1;
        int res=0,prefix=0;
        unordered_map<int,int> freq;
        freq[0]=-1;
        for(int i=0;i<nums.size();i++){
            prefix+=nums[i];
            if(freq.find(prefix)!=freq.end())
                res=max(res,i-freq[prefix]);
            else
                freq[prefix]=i;
        }
        return res;
    }
};