https://leetcode.com/problems/count-pairs-whose-sum-is-less-than-target/description/?envType=problem-list-v2&envId=binary-search


class Solution {
    public int countPairs(List<Integer> a, int k) {
        int n = a.size();
        int count = 0;
        Collections.sort(a);

        // for(int i=0; i<n; i++)
        // {
        //     for(int j=i+1; j<n; j++)
        //     {
        //         int sum = a.get(i)+a.get(j);

        //         if(sum<k)
        //         {
        //             count++;
        //         }
        //     }
        // }
        int start = 0;
        int end = n-1;

        while(start<=end)
        {
            if(a.get(end) + a.get(start) < k)
            {
                count += (end - start);
                start++;
            }
            else
            {
                end--;
            }
        }
        return count;
    }
}
