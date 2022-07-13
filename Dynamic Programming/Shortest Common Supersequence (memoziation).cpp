// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++


class Solution
{
    public:
    
    int dp[1005][1005];
    int help(string &x, string &y, int n, int m)
    {
        if(n==0 || m==0)
        {
            return 0;
        }
        
        if(dp[n][m] != -1)
        {
            return dp[n][m];
        }
        
        if(x[n-1] == y[m-1])
        {
            return dp[n][m] = 1+help(x,y,n-1,m-1);
        }
        else
        {
            return dp[n][m] = max(help(x,y,n-1,m),help(x,y,n,m-1));
        }
    }
    //Function to find length of shortest common supersequence of two strings.
    int shortestCommonSupersequence(string x, string y, int n, int m)
    {
       memset(dp,-1,sizeof(dp));
        
        int ans = help(x,y,n,m);
        
        return (m+n)-ans;
        //code here
        
        // int dp[n+1][m+1];
        
        // for(int i=0; i<n+1; i++)
        // {
        //     for(int j=0; j<m+1; j++)
        //     {
        //         if(i==0 || j==0)
        //         {
        //             dp[i][j]=0;
        //         }
        //     }
        // }
                                            //tabulation
        // for(int i=1; i<n+1; i++)
        // {
        //     for(int j=1; j<m+1; j++)
        //     {
        //         if(x[i-1] == y[j-1])
        //         {
        //             dp[i][j] = 1+dp[i-1][j-1];
        //         }
        //         else
        //         {
        //             dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
        //         }
        //     }
        // }
        
        // return (m+n)-dp[n][m];
    }
};

// { Driver Code Starts.

int main()
{   
    
    int t;
    
    //taking total testcases
    cin >> t;
    while(t--){
    string X, Y;
    //taking String X and Y
	cin >> X >> Y;
	
	//calling function shortestCommonSupersequence()
	Solution obj;
	cout << obj.shortestCommonSupersequence(X, Y, X.size(), Y.size())<< endl;
    }
	return 0;
}

  // } Driver Code Ends
