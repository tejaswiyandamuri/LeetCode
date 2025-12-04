class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int l=0,r=nums.size()-1;
        vector<int> res(r+1,0);
        int i=r;
        while(l<=r){
            int xl=pow(nums[l],2);
            int yr=pow(nums[r],2);
            if(xl>yr){
                res[i]=xl;
                l++;
            }else{
                res[i]=yr;
                r--;
            }
            i--;
        }
        return res;
    }
};