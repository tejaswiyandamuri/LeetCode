class Solution {
public:
    bool bfs(vector<vector<int>>& g, int i, int j, int& k) {
        vector<int> dx = {-1, 0, 1, 0};
        vector<int> dy = {0, 1, 0, -1};

        int n = g.size(), m = g[0].size();

        queue<pair<int, int>> q;
        long long sum = g[i][j];

        g[i][j] = 0;
        q.push({i, j});

        while (!q.empty()) {
            auto x = q.front();
            q.pop();

            int ci = x.first;
            int cj = x.second;

            for (int y = 0; y < 4; y++) {
                int p = ci + dx[y];
                int r = cj + dy[y];

                if (p >= 0 && p < n && r >= 0 && r < m) {
                    if (g[p][r] != 0) {
                        sum += g[p][r];
                        g[p][r] = 0;
                        q.push({p, r});
                    }
                }
            }
        }

        return sum % k == 0;
    }
    int countIslands(vector<vector<int>>& grid, int k) {
        int res = 0, n = grid.size(), m = grid[0].size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] != 0 && bfs(grid, i, j, k))
                    res++;
            }
        }
        return res;
    }
};