class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        long long k = 1LL * k1 + k2;
        int mx = 0;
        vector<int> d(nums1.size());
        for(int i = 0; i < nums1.size(); i++){
            d[i] = abs(nums1[i] - nums2[i]);
            mx = max(mx, d[i]);
        }
        vector<long long> freq(mx + 1, 0);
        for(int x : d)
            freq[x]++;
        for(int x = mx; x > 0 && k > 0; x--){
            long long cnt = freq[x];
            long long use = min(k, cnt);
            freq[x] -= use;
            freq[x-1] += use;
            k -= use;
        }
        long long res = 0;
        for(int x = 1; x <= mx; x++)
            res += freq[x] * x * x;

        return res;
    }
};