class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(), cost.end());
        int res = 0, n = cost.size(), i = n - 1;
        vector<bool> bought();
        while (i >= 2) {
            res+=cost[i]+cost[i-1];
            i=i-3;
        }
        while(n%3!=0&&i>=0)
            res+=cost[i--];
        return res;
    }
};