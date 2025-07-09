/*Given an undirected graph with V vertices and E edges, represented as a 2D vector edges[][], where each entry edges[i] = [u, v] denotes an edge between vertices u and v, determine whether the graph contains a cycle or not.

Examples:

Input: V = 4, E = 4, edges[][] = [[0, 1], [0, 2], [1, 2], [2, 3]]
Output: true
Explanation: 
 
1 -> 2 -> 0 -> 1 is a cycle.*/






  class Solution {
    public boolean dfs(ArrayList<ArrayList<Integer>> adj, int u, int parent, boolean[] vis)
    {
        vis[u] = true;
        
        for(int i: adj.get(u))
        {
            if(i==parent)
            {
                continue;
            }
            if(vis[i])
            {
                return true;
            }
            if(dfs(adj,i,u,vis))
            {
                return true;
            }
        }
        return false;
    }
    public boolean isCycle(int n, int[][] edges) {
        // Code here
        boolean vis[] = new boolean[n];
        ArrayList<ArrayList<Integer>> adj = new ArrayList<>();
        
        for(int i=0; i<n; i++)
        {
            adj.add(new ArrayList<>());
        }
        
        for(int i=0; i<edges.length;i++)
        {
            adj.get(edges[i][0]).add(edges[i][1]);
            adj.get(edges[i][1]).add(edges[i][0]);
        }
        
        for(int i=0; i<n; i++)
        {
            if(!vis[i] && dfs(adj,i,-1,vis))
            {
                return true;
            }
        }
        return false;
        
    }
}
