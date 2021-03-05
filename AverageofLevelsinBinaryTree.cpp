/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    vector<double> averageOfLevels(TreeNode* root) {
        
        vector <double> res;
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            
            double sum = 0;int count = 0; 
            queue<TreeNode*> temp;
            while(!q.empty()){
                
                TreeNode *node=q.front();
                q.pop();
                sum+= node->val;
                count++;
                
                if (node->left != NULL) 
                temp.push(node->left); 
                if (node->right != NULL) 
                temp.push(node->right); 
            }
            q=temp;
            res.push_back(sum/count);
        }
        
        return res;
    }
};
