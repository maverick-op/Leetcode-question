class Solution {
public:
    int findTargetSumWays(vector<int>& a, int target) {
        
        target = abs(target);
        
        int n =a.size();
        int sum=0;
        
        for(int i=0; i<n; i++)
        {
            sum += a[i];
        }
        
        if((sum+target)%2 != 0 || sum < target)
        {
            return 0;
        }
        
        int diff = (sum+target)/2;
        
        int dp[n+1][diff+1];
        
        for(int i=0; i<n+1; i++)
        {
            for(int j=0; j<diff+1; j++)
            {
                if(i==0)
                {
                    dp[i][j] = 0;
                }
                if(j==0)
                {
                    dp[i][j] = 1;
                }
            }
        }
        
        for(int i=1; i<n+1; i++)
        {
            for(int j=0; j<diff+1; j++)
            {
                if(a[i-1] <= j)
                {
                    dp[i][j] = dp[i-1][j-a[i-1]]+dp[i-1][j];
                }
                else
                {
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        
        return dp[n][diff];        
    }
};
