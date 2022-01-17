 // https://leetcode.com/problems/increasing-order-search-tree/ 


// we first simply inorder traverse through the tree and store it in a vector
// then we create a new tree and traverse through the vector and store the 
// value in right side of the new tree and null to the left side and return the
// new tree.

class Solution {
public:
    
    vector<int> v;
    
    void inorder(TreeNode* root)
    {
        if(root == NULL)
        {
            return;
        }
        
        inorder(root->left);
        
        v.push_back(root->val);
        
        inorder(root->right);

    }
    TreeNode* increasingBST(TreeNode* root) {
        
        if(root == NULL)
        {
            return NULL;
        }
        
        inorder(root);
        TreeNode* node= new TreeNode(v[0]);
        TreeNode* temp=node;
        
        for(int i=1; i<v.size(); i++)
        {
            node->left = NULL;
            node->right = new TreeNode(v[i]);
            node = node->right;
        }
        
        return temp;
        
    }
};
