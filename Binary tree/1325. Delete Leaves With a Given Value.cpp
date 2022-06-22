Approach:- simply do post order traversal and check if the root left and right are null
and root value is same as target then in that place return NULL

class Solution {
public:
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        
        if(root == NULL)
        {
            return NULL;
        }
        
        root->left = removeLeafNodes(root->left,target);
        root->right = removeLeafNodes(root->right,target);
        
        if(root->left == NULL && root->right == NULL && root->val == target)
        {
            return NULL;
        }
        
        return root;
    }
};
