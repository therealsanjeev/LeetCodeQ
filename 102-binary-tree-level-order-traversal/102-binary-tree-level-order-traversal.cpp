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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL) return ans;
        
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        vector<int> v;
        while(!q.empty()){
            TreeNode* f=q.front(); q.pop();
          
            if(f){
                v.push_back(f->val);
                if(f->left) q.push(f->left);
                if(f->right) q.push(f->right);
            }else{
                
                if(!q.empty()){
                    q.push(NULL);
                   
                }
                
                ans.push_back(v);
                v.clear();
                
            }
           
            
        }
        return ans;
    }
};