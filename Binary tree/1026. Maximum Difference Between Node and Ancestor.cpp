Aprroach:- Traverse through left part and right part and compare in which part
the differnce between the nodes is maximum and return that part


Solution:-
class Solution {
public:
    int maxAncestorDiff(TreeNode* root, int maxx=0, int minn=1e7) {
        
        int ans = 0;
        
        if(root == NULL)
        {
            return (maxx-minn);
        }
        
        maxx = max(root->val, maxx);
        minn = min(root->val, minn);
        
        ans = max(maxAncestorDiff(root->left,maxx,minn),maxAncestorDiff(root->right,maxx,minn));
        
        return ans;
    }
};
