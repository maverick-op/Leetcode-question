/* https://leetcode.com/problems/merge-two-binary-trees/ */

// In this problem what i have done is that if either of the tree 
// root is null then i will return the another tree else we will 
// add the the root value of the both the tree and update it and 
// return the root1

class Solution {
public:
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        
        if(root1 == NULL && root2 == NULL)
        {
            return NULL;
        }
        if(root1 == NULL && root2 != NULL)
        {
            return root2;
        }
        if(root1 != NULL && root2 == NULL)
        {
            return root1;
        }
        
        root1->val += root2->val;
        root1->left = mergeTrees(root1->left, root2->left);
        root1->right = mergeTrees(root1->right, root2->right);
        
        return root1;
    
    }
};
