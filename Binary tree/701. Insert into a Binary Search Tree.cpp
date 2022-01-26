// https://leetcode.com/problems/insert-into-a-binary-search-tree/

// Approach:- simply compare the val to that part of the tree and 
//   insert that value and return the new updated tree


class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root == NULL)
        {
            return new TreeNode(val);
        }
        
        TreeNode* node = root;
        
        while(true)
        {
            if(node->val <= val)
            {
                if(node->right != NULL)
                {
                    node = node->right;
                }
                else
                {
                    node->right = new TreeNode(val);
                    break;
                }
            }
            else
            {
                if(node->left != NULL)
                {
                    node = node->left;
                }
                else
                {
                    node->left = new TreeNode(val);
                    break;
                }
            }
        }
        return root;
        
    }
};
