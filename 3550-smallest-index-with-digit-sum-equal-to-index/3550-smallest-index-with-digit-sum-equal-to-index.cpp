class Solution {
public:
    long long sumof(int num){
        long long res=0;
        while(num>0){
            res=res+(num%10);
            num/=10;
        }
        return res;
    }
    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
            if(i==sumof(nums[i]))return i;
        return -1;
    }
};