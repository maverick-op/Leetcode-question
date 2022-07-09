class Solution {
public:
    int dp[1005][1005];
    int help(string &s1,string &s2, int n, int m)
    {
        if(n==0 || m==0)
        {
            return 0;
        }
        
        if(dp[n][m] != -1)
        {
            return dp[n][m];
        }
                                          // Recursive
        if(s1[n-1] == s2[m-1])
        {
            return dp[n][m] = 1+help(s1,s2,n-1,m-1);
        }
        else
        {
            return dp[n][m] = max(help(s1,s2,n-1,m),help(s1,s2,n,m-1));
        }
    }
    int longestCommonSubsequence(string s1, string s2) {
        
        int n= s1.size();
        int m = s2.size();
        memset(dp,-1,sizeof(dp));
        int ans = help(s1,s2,n,m);
        
        return ans;
    }
};
