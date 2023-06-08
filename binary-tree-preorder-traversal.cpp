//https://leetcode.com/problems/binary-tree-preorder-traversal/submissions/966474479/

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

    vector<int> preorderTraversal(TreeNode* root) {
        if(root!=NULL){
            nodes.push_back(root->val);
            if(root->left){
                preorderTraversal(root->left);
            }
            if(root->right){
                preorderTraversal(root->right);
            }
        }
        return nodes;
    }
};