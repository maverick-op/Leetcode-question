// https://leetcode.com/problems/same-tree/

approcah:- 

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL || q==NULL)
        {
            return p==q;
        }
        
        if(p->val==q->val)
        {
            if(isSameTree(p->left,q->left) && isSameTree(p->right,q->right))
            {
                return true;
            }
            return false;
        }
        
        return false;
        
    }
};
