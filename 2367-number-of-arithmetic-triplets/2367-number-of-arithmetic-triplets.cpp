class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        unordered_map<int, int> isexist;
        for (auto num : nums) {
            isexist[num]++;
        }
        int res = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (isexist[nums[i] - diff] && isexist[nums[i] + diff])
                res++;
        }
        return res;
    }
};