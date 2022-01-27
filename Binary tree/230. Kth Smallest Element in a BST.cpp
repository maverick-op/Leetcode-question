// https://leetcode.com/problems/kth-smallest-element-in-a-bst/

// Approach:- simple store the val of tree in vector and sort it
// and return the desired output

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
    int kthSmallest(TreeNode* root, int k) {
        inorder(root);
        
        sort(v.begin(),v.end());
        
        return v[k-1];
    }
};
