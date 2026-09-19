class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int res=0,n=nums.size();
        for(int i=0;i<n;i++){
            int j;
            int x=nums[i];
            for( j=i+1;j<n;j++){
                if((x&nums[j])!=0)break;
                x|=nums[j];
                res=max(res,j-i+1);
            }
        }
        return res==0?1:res;
    }
};