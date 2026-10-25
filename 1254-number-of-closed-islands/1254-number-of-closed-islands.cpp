class Solution {
public:
    int bfs(vector<vector<int>>& g, int i, int j) {
        vector<int> dx = {-1, 0, 1, 0}, dy = {0, 1, 0, -1};
        int n = g.size(), m = g[0].size();
        queue<pair<int, int>> q;
        q.push({i, j});
        bool ok=true;
        while (!q.empty()) {
            auto x = q.front();
            int ci = x.first, cj = x.second;
            if (ci == 0 || ci == n - 1 || cj == 0 || cj == m - 1)
                ok=false;
            g[ci][cj] = 2;
            for (int y = 0; y < 4; y++) {
                int p = ci + dx[y], r = cj + dy[y];
                 if (p >= 0 && p <= n - 1 && r >= 0 && r <= m - 1) {
                    if (g[p][r] == 0)
                        q.push({p, r});
                }
            }
            q.pop();
        }
        return ok?1:0;
    }
    int closedIsland(vector<vector<int>>& grid) {
        int res = 0, n = grid.size(), m = grid[0].size();
        for (int i = 1; i < n-1; i++) {
            for (int j = 1; j < m-1; j++) {
                if (grid[i][j] == 0)
                    res += bfs(grid, i, j);
            }
        }
        return res;
    }
};