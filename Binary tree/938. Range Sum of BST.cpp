// https://leetcode.com/problems/range-sum-of-bst/


// Approach :- if the root is null we simply return 0 then we will travel through
// the tree and if the node val is greater than low and less than high then will 
// will add the val and update it in the new variable sum

// note:- first we will traverse through left then right 

class Solution {
public:
    int sum=0;
    void tree(TreeNode*  node, int low, int high)
    {
        if(node==NULL)
        {
            return;
        }
        
        if((node->val) >= low && (node->val) <= high)
        {
            sum += node->val;
        }
        
        tree(node->left,low,high);
        tree(node->right,low,high);
       
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        tree(root,low,high);
        
        return sum;
    }
};
