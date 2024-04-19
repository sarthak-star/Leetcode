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
    void flatten(TreeNode* root) {
        
        while(root){
            if(root->left){
                TreeNode* temp = root->right;
                TreeNode* temp2 = root->left;

                while(temp2 && temp2->right){
                    temp2 = temp2->right;
                }

                root->right = root->left;
                temp2->right = temp;
            }
            root->left = nullptr;
            root = root->right;
        }

        
    }
};