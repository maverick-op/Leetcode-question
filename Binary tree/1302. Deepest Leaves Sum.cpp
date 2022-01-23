// https://leetcode.com/problems/deepest-leaves-sum/

Approach:- first i have taken the max height of the tree then  i will compare it 
with the level and adding the value of that level which is equal to the max height



class Solution {
public:
    int ans = 0;
    int height(TreeNode* root)
    {
        if(root == NULL)
        {
            return 0;
        }
        
        int l = height(root->left);
        int r = height(root->right);
        
        return max(l,r)+1;
    }
    
    void sum(TreeNode* root,int h, int l)
    {
        if(root == NULL)
        {
            return;
        }
        if(h == l)
        {
            ans += root->val;
        }
        
        sum(root->left,h,l+1);
        sum(root->right,h,l+1);
    }
    int deepestLeavesSum(TreeNode* root) {
        int h = height(root);
        sum(root,h,1);
        
        return ans;
    }
};
