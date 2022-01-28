// https://leetcode.com/problems/two-sum-iv-input-is-a-bst/

// Approach:- simply store the value of tree and add every pair 
// and check with the target sum

class Solution {
public:
    vector<int> v;
    void inorder(TreeNode* root)
    {
        if(root==NULL)
        {
            return;
        }
        
        inorder(root->left);
        v.push_back(root->val);
        inorder(root->right);
    }
    bool findTarget(TreeNode* root, int k) {
       inorder(root);
        
        for(int i=0; i<v.size(); i++)
        {
            for(int j=i+1; j<v.size(); j++)
            {
                if(v[i]+v[j] == k)
                {
                    return true;
                }
            }
        }
        
        return false;
    }
};
