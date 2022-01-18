// https://leetcode.com/problems/maximum-depth-of-binary-tree/

// Approach :- here i am maintaing the length of left part and right part
// and returning the max (which part length is greater ) and adding 1 beacuse
// we have to take the root node also,


class Solution {
public:
    
    int maxDepth(TreeNode* root) {
        if(root==NULL)
        {
            return 0;
        }
        
        int l = maxDepth(root->left);
        int r = maxDepth(root->right);
        
        return 1+max(l,r);
        
    }
};
