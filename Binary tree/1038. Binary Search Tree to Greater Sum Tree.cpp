// https://leetcode.com/problems/binary-search-tree-to-greater-sum-tree/

// Approach :- As we know that in binary search tree right part will be greater than the left part
// so we have to start update from the right which has grater element so in this problem we will
// simply traverse by Reverse inorder traversal and update the node so for example right is 8 so it will 
// be 8 then count will become 8 now we move to root node the we will add and update that node 8+7=15 
// then we will move to left node and return because there is no node and in this way we have to continue the 
// whole process.

class Solution {
public:
    
    void rev_inorder(TreeNode* root, int& count)
    {
        if(root == NULL)
        {
            return;
        }
        
        rev_inorder(root->right,count);
        
        root->val += count;
        count = root->val;
        
        rev_inorder(root->left,count);
    }
    TreeNode* bstToGst(TreeNode* root) {
        int count=0;
        rev_inorder(root,count);
        
        return root;
        
    }
};
