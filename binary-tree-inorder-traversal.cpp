//https://leetcode.com/problems/binary-tree-inorder-traversal/submissions/966476307/

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
    vector<int> nodes;

    vector<int> inorderTraversal(TreeNode* root) {
        if(root){
            if(root->left){
                inorderTraversal(root->left);
            }
            nodes.push_back(root->val);
            if(root->right){
                inorderTraversal(root->right);
            }
        }
        return nodes;
    }
};