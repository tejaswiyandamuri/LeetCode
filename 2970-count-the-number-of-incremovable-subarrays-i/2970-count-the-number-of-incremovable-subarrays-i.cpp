class Solution {
public:
    int incremovableSubarrayCount(vector<int>& nums) {
        int n = nums.size();
        int res = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = i; j < n; ++j) {
                // Build the remaining array after removing [i, j]
                vector<int> remaining;
                for (int k = 0; k < n; ++k) {
                    if (k < i || k > j)
                        remaining.push_back(nums[k]);
                }

                // Check if remaining array is strictly increasing
                bool ok = true;
                for (int k = 1; k < remaining.size(); ++k) {
                    if (remaining[k] <= remaining[k - 1]) {
                        ok = false;
                        break;
                    }
                }
                if (ok) res++;
            }
        }
        return res;
    }
};
