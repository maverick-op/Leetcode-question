// https://leetcode.com/problems/minimum-depth-of-binary-tree/

// Aprroach:-  first we will check if the root node is null or not then 
// we will keep length of left side and rightside of the tree in l and r 
// and if left part of the tree is null or right part of the tree is null
// we will return the max of the length +1
// otherwise we will return min of the length +1   
  
// Note:- i am adding 1 beacuse we have to count the root node also


class Solution {
public:
    int minDepth(TreeNode* root) {
        
        if(root==NULL)
        {
            return 0;
        }
        
        int l = minDepth(root->left);
        int r = minDepth(root->right);
        
        if(root->left == NULL || root->right == NULL)
        {
            return max(l,r)+1;
        }
        else
        {
            return min(l,r)+1;
        }
            
    }
};
