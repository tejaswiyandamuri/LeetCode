class Solution {
public:
    int digitsum(int num){
        int res=0;
        while(num>0){
            int rem=num%10;
            res+=rem;
            num/=10;
        }
        return res;
    }
    int minElement(vector<int>& nums) {
        int res=INT_MAX;
        for(auto x:nums){
            res=min(res,digitsum(x));
        }
        return res;
    }
};