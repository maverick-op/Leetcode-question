class Solution {
public:
    int count=0;
    vector<int> ans;
    void help(TreeNode* root, int maxx)
    {
        if(root == NULL)
        {
            return;
        }
        
        if(root->val >= maxx)
        {
            count++;
        }
        
        maxx = max(maxx,root->val);
        
        help(root->left,maxx);
        help(root->right,maxx);
    }
    int goodNodes(TreeNode* root) {
        help(root,INT_MIN);
        
        return count;
    }
};
