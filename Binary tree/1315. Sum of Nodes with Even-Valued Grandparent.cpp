// https://leetcode.com/problems/sum-of-nodes-with-even-valued-grandparent/

Approach :- check that the node is even then we have to move to the grand child node and add
the value to the sum and return the sum do this step till the whole tree

class Solution {
public:
    int sumEvenGrandparent(TreeNode* root) {
        int sum=0;
        
        if(root == NULL)
        {
            return 0;
        }
        
        if(root->val % 2 ==0)
        {
            if(root->left != NULL && root->left->left != NULL)
            {
                sum += root->left->left->val;
            }
            if(root->left != NULL && root->left->right != NULL)
            {
                sum += root->left->right->val;
            }
            if(root->right != NULL && root->right->right != NULL)
            {
                sum += root->right->right->val;
            }
            if(root->right != NULL && root->right->left != NULL)
            {
                sum += root->right->left->val;
            }
        }
        
       sum += sumEvenGrandparent(root->left);
       sum += sumEvenGrandparent(root->right);
        
        return sum;
    }
};
