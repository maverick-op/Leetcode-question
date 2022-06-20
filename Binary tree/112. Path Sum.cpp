// Approach :- simply iterate through the left part and right part and
// deducting the node value from the target sum if sum becomes zero and 
// after that there is no node then it will be true 

class Solution {
public:
    bool hasPathSum(TreeNode* root, int k) {
        
        if(root == NULL)
        {
            return false;
        }
        
        k -= root->val;
        
        if(k==0 && root->left == NULL && root->right == NULL)
        {
            return true;
        }
        
        return hasPathSum(root->left,k) || hasPathSum(root->right,k);
        
    }
};
