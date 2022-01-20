// https://leetcode.com/problems/balanced-binary-tree/


class Solution {
public:
    int height(TreeNode* root)
    {
        if(root==NULL)
        {
            return 0;
        }
        
        int l = height(root->left);
        if(l==-1)
        {
            return -1;
        }
        int r = height(root->right);
        if(r==-1)
        {
            return -1;
        }
        
        if(abs(l-r)>1)
        {
            return -1;
        }
        
        return max(l,r)+1;
    }
    bool isBalanced(TreeNode* root) {
       return height(root) != -1;
    }
    
};
