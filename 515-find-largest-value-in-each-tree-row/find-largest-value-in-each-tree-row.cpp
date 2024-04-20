/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        vector<int> ans;
        queue<TreeNode*> q;

        if(!root){
            return ans;
        }
        q.push(root);

        while(!q.empty()){
            int maxi = INT_MIN;
            int size = q.size();
            for(int i = 0 ; i < size ; i++){
                TreeNode* curr = q.front();
                q.pop();
                maxi = max(maxi,curr->val);
                if(curr->left){
                    q.push(curr->left);
                }
                if(curr->right){
                    q.push(curr->right);
                }
            }
            ans.push_back(maxi);
        }
        return ans;
        
    }
};