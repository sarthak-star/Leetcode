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
    int ans = 0;
    int maxlevel = -1;
    void solve(TreeNode* root,int level){
        if(!root){
            return;
        }
        if(level > maxlevel){
            maxlevel = level;
            ans = root->val;
        }     

        
        solve(root->left , level + 1);
        solve(root->right , level + 1);

        

    }

    int findBottomLeftValue(TreeNode* root) {
        
        solve(root,0);

        return ans;
    }
};