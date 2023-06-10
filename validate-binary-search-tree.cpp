//https://leetcode.com/problems/validate-binary-search-tree/submissions/967824561/

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
    bool isVBST(TreeNode* root, long min, long max){
        if(!root){
            return true;
        }
        if(root->val <= min || root->val >= max){
            return false;
        } 
        return isVBST(root->right, root->val, max) && isVBST(root->left, min, root->val);
        }

    bool isValidBST(TreeNode* root) {
        return isVBST(root, pow(-2,31) - 1, pow(2,31));
    }
};