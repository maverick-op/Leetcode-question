https://leetcode.com/problems/intersection-of-two-arrays/?envType=problem-list-v2&envId=binary-search

class Solution {
    public int[] intersection(int[] a, int[] b) {
        
        int n = a.length;
        int m = b.length;

        Set<Integer> s1 = new HashSet<>();
        Set<Integer> s2 = new HashSet<>();

        for(int i : a)
        {
            s1.add(i);
        }
        for(int i : b)
        {
            s2.add(i);
        }
        Set<Integer> ans = new HashSet<>();

        for(Integer i : s1)
        {
            if(s2.contains(i))
            {
                ans.add(i);
            }
        }
        int[] arr = new int[ans.size()];
        int j = 0;
        for (Integer val : ans) {
            arr[j] = val.intValue();
            j++;
        }
        return arr;
    }
}
