Approach:- in this problem we will do level wise traversal for
  every node and add the value of node  and check its avg is equal to the root node 
  or not and then increment the ans variable

class Solution {
public:
    int ans = 0;
    
    void help(TreeNode* root)
    {
        int sum=0,count=0;
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty())
        {
            for(int i=0; i<q.size(); i++)
            {
            TreeNode* node = q.front();
            q.pop();
            
            sum += node->val;
            count++;
            
            if(node->left != NULL)
            {
                q.push(node->left);
            }
            if(node->right != NULL)
            {
                q.push(node->right);
            }
            }
        }
        
        if(sum/count == root->val)
        {
            ans++;
        }
        
    }
    int averageOfSubtree(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty())
        {
            for(int i=0; i<q.size(); i++)
            {
            TreeNode* node = q.front();
            q.pop();
            
            help(node);
            
            if(node->left != NULL)
            {
                q.push(node->left);
            }
            if(node->right != NULL)
            {
                q.push(node->right);
            }
            }
        }
        
        return ans;
        
    }
};
