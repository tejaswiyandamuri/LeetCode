class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        long long s_max = 0, s_min = 0;
        int n = nums.size(), pge = -1, pse = -1;
        stack<int> sg, se;
        vector<int> nsg(n, n), nse(n, n);

        // Next greater and next smaller
        for (int i = n - 1; i >= 0; i--) {
            while (!sg.empty() && nums[sg.top()] >= nums[i])
                sg.pop();
            nsg[i] = sg.empty() ? n : sg.top();
            sg.push(i);

            while (!se.empty() && nums[se.top()] <= nums[i])
                se.pop();
            nse[i] = se.empty() ? n : se.top();  // FIXED
            se.push(i);
        }

        sg = {};
        se = {};

        // Previous greater and previous smaller
        for (int i = 0; i < n; i++) {
            while (!sg.empty() && nums[sg.top()] > nums[i])
                sg.pop();
            pge = sg.empty() ? -1 : sg.top();
            sg.push(i);

            while (!se.empty() && nums[se.top()] < nums[i])
                se.pop();
            pse = se.empty() ? -1 : se.top();
            se.push(i);

            int left = i - pse, right = nse[i] - i;
            s_min += (long long)nums[i] * left * right;

            left = i - pge;
            right = nsg[i] - i;
            s_max += (long long)nums[i] * left * right;
        }

        return abs(s_max - s_min);  // FIXED
    }
};
