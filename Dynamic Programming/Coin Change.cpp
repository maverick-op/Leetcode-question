

Solution:-
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    long long int count(int a[], int n, int k) {

        // code here.
     //  long long int n = a.size();
        
        long long int dp[n+1][k+1];
        
        for(int i=0; i<n+1; i++)
        {
            for(int j=0; j<k+1; j++)
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
            for(int j=1; j<k+1; j++)
            {
                if(a[i-1] <= j)
                {
                    dp[i][j] = dp[i][j-a[i-1]] + dp[i-1][j];
                }
                else
                {
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        
        return dp[n][k];
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int arr[m];
        for (int i = 0; i < m; i++) cin >> arr[i];
        Solution ob;
        cout << ob.count(arr, m, n) << endl;
    }

    return 0;
}  // } Driver Code Ends
