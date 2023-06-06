//https://leetcode.com/problems/univalued-binary-tree/submissions/965085777/

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
    bool isUnivalTree(TreeNode* root) {
        if(root->left && root->right){
            if(root->val != root->left->val || root->val != root->right->val){
                return false;
            }else{
                return isUnivalTree(root->left) && isUnivalTree(root->right);   
            }
        }
        if(root->left){
            if(root->val != root->left->val){
                return false;
            }else{
                return isUnivalTree(root->left);
            }
        }
        if(root->right){
            if(root->val != root->right->val){
                return false;
            }else{
                return isUnivalTree(root->right);
            }
        }
        return true;
    }
};