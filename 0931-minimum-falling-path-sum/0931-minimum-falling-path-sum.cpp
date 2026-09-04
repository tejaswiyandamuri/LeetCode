class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& mat) {
        int res = INT_MAX;
		int m = mat.size();
		int n = mat[0].size();
		for (int i = 0; i<m; i++) {
			for (int j = 0; j<n; j++) {
				int ele = 0;
				if (i>0) {
					ele = mat[i - 1][j];
					if (j >= 1 && j<n - 1)
						ele =min(ele, min(mat[i - 1][j - 1], mat[i - 1][j + 1]));
					else if (j == 0) {
						if (n>1)
							ele = min(ele, mat[i - 1][j + 1]);
					}
					else {
						if (j>0)
							ele = min(ele, mat[i - 1][j - 1]);
					}
					mat[i][j] += ele;
				}
				if (i == m - 1)
					res = min(res, mat[i][j]);
			}
		}
		return res;
    }
};