class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        const int MOD = 1e9 + 7;
        long long res = 0;
        unordered_map<int, int> prefix_freq, suffix_freq;

        // Build suffix frequency
        for (int num : nums) suffix_freq[num]++;

        for (int j = 0; j < nums.size(); j++) {
            suffix_freq[nums[j]]--;  // move nums[j] out of suffix

            long long left = prefix_freq[nums[j] * 2];   // count of i < j
            long long right = suffix_freq[nums[j] * 2];  // count of k > j

            res = (res + left * right) % MOD;

            prefix_freq[nums[j]]++;  // add nums[j] to prefix
        }

        return (int)res;
    }
};
