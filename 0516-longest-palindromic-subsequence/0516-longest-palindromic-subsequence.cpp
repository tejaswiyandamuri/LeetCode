class Solution {
public:
    int longestPalindromeSubseq(string s) {
        int n=s.length();
        vector<vector<int>> dp(n+1,vector<int>(n+1,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(s[i]==s[n-j-1])
                    dp[i+1][j+1]=dp[i][j]+1;
                else
                    dp[i+1][j+1]=max(dp[i][j+1],dp[i+1][j]);
            }
        }
        return dp[n][n];
    }
};