class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i = nums.size() - 1, j, r;
        while (i > 0 && nums[i - 1] >= nums[i])
            i--;
        if (i  == 0)
            reverse(nums.begin(), nums.end());
        else {
            r = i;
            for (j = i; j < nums.size(); j++) {
                if (nums[j] > nums[i-1] && nums[j] <= nums[r])
                    r = j;
            }
            swap(nums[i - 1], nums[r]);
            sort(nums.begin() + i , nums.end());
        }
    }
};