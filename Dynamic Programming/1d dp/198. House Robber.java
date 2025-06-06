You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed, the only constraint stopping you from robbing each of them is that adjacent houses have security systems connected and it will automatically contact the police if two adjacent houses were broken into on the same night.

Given an integer array nums representing the amount of money of each house, return the maximum amount of money you can rob tonight without alerting the police.

Example 1:

Input: nums = [1,2,3,1]
Output: 4
Explanation: Rob house 1 (money = 1) and then rob house 3 (money = 3).
Total amount you can rob = 1 + 3 = 4.
Example 2:

Input: nums = [2,7,9,3,1]
Output: 12
Explanation: Rob house 1 (money = 2), rob house 3 (money = 9) and rob house 5 (money = 1).
Total amount you can rob = 2 + 9 + 1 = 12.


*******************************************************************SOLUTION******************************************************************************************************************
class Solution {
    public int help(int i, int n, int[] a, int[] dp)
    {
        if(i>=n)
        {
            return 0;
        }

        if(dp[i] != -1)
        {
            return dp[i];
        }

        int take = a[i] + help(i+2,n,a,dp);  // we can take the adjacent element
        int not_take = 0 + help(i+1,n,a,dp); // we cannot take the consecutive element

        return dp[i]  = Math.max(take,not_take);

    }
    public int rob(int[] a) {
        int n = a.length;
        int[] dp = new int[n];
        Arrays.fill(dp,-1);

        return help(0,n,a,dp);
    }
}
