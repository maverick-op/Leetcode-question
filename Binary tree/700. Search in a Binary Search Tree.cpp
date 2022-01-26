// https://leetcode.com/problems/search-in-a-binary-search-tree/

// Approach :- in bst left subtree is less than right so we will simply 
// compare and move to that part of the tree unless root value is not equal 
// to the target val


class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        
        while(root != NULL && root->val != val)
        {
            if(val<root->val)
            {
                root = root->left;
            }
            else
            {
                root = root->right;
            }
        }
        
        return root;
        
    }
};
