// https://leetcode.com/problems/all-elements-in-two-binary-search-trees/

// Approach:- we will traverse through both the trees and will store the value
// of both the tree in a single vector and then sort the vector and atlast return
// that vector

class Solution {
public:
    vector<int> v;
    
    void inorder(TreeNode* root1)
    {
        if(root1==NULL)
        {
            return;
        }
        
        inorder(root1->left);
        v.push_back(root1->val);
        inorder(root1->right);
    }
    
    void inorder1(TreeNode* root2)
    {
        if(root2==NULL)
        {
            return;
        }
        
        inorder1(root2->left);
        v.push_back(root2->val);
        inorder1(root2->right);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        inorder(root1);
        inorder(root2);
        sort(v.begin(),v.end());
        return v;
    }
};
