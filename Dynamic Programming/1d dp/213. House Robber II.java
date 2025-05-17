You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed. All houses at this place are arranged in a circle. That means the first house is the neighbor of the last one. Meanwhile, adjacent houses have a security system connected, and it will automatically contact the police if two adjacent houses were broken into on the same night.

Given an integer array nums representing the amount of money of each house, return the maximum amount of money you can rob tonight without alerting the police.

 

Example 1:

Input: nums = [2,3,2]
Output: 3
Explanation: You cannot rob house 1 (money = 2) and then rob house 3 (money = 2), because they are adjacent houses.
Example 2:

Input: nums = [1,2,3,1]
Output: 4
Explanation: Rob house 1 (money = 1) and then rob house 3 (money = 3).
Total amount you can rob = 1 + 3 = 4.
Example 3:

Input: nums = [1,2,3]
Output: 3


  *************************************************************solution*****************************************************************************

  class Solution {
    public int help(int n, int i, int[] dp, int[] a)
    {
        if(i>n)
        {
            return 0;
        }

        if(dp[i] != -1)
        {
            return dp[i];
        }

        int take = a[i] + help(n,i+2,dp,a);
        int not_take = 0 + help(n,i+1,dp,a);

        return dp[i] = Math.max(take,not_take);
    }
    public int rob(int[] a) {
        
        int n = a.length;
        int[] dp = new int[n];
        Arrays.fill(dp,-1);

        if(n==0)
        {
            return 0;
        }
        if(n==1)
        {
            return a[0];
        }
        if(n==2)
        {
            return Math.max(a[0],a[1]);
        }

        int case1 = help(n-2,0,dp,a); // if we select from the first element then we cannot take the last element
        Arrays.fill(dp,-1);
        int case2 = help(n-1,1,dp,a); // if we start from the second element then we can take the last element

        return Math.max(case1,case2);

    }
}
