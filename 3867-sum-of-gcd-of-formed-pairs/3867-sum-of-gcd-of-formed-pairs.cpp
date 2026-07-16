class Solution {
public:

    long long gcd(long long a,long long b){
        while(b){
            long long t=b;
            b=a%b;
            a=t;
        }
        return a;
    }

    long long gcdSum(vector<int>& nums) {

        int maxSofar=nums[0];
        vector<long long> prefixgcd;

        for(auto num:nums){
            maxSofar=max(maxSofar,num);
            prefixgcd.push_back(gcd(maxSofar,num));
        }

        sort(prefixgcd.begin(),prefixgcd.end());

        long long result=0;
        int n=prefixgcd.size();

        for(int i=0;i<n/2;i++)
            result+=gcd(prefixgcd[i],prefixgcd[n-i-1]);

        return result;
    }
};