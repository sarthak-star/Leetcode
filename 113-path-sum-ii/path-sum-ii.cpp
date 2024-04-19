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
    
    

    void solve(TreeNode* root, int target,int sum,vector<int> op,vector<vector<int>>& ans){
        
        if(!root){
            return;
        }

        sum += root->val;
        op.push_back(root->val);
        if(!root->left && !root->right && sum==target){
            ans.push_back(op);
            return;
            
            
        }

        

        solve(root->left,target,sum,op,ans);
        solve(root->right,target,sum,op,ans);

        sum -=root->val;
        op.pop_back();

        return;
    }


    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> op;
        vector<vector<int>> ans;

        solve(root,targetSum,0,op,ans);

        return ans;
    }
};