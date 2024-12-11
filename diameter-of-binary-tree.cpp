// https://leetcode.com/problems/diameter-of-binary-tree/submissions/1476450382/

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
//find height of each node, maintain max height and return
    int diameterOfBinaryTree(TreeNode* root) {
        int maxH = 0;
        findH(root, maxH);
        return maxH;
    }

    int findH(TreeNode* node, int& maxH){
        if(!node){
            return 0;
        }

        int leftH = findH(node->left, maxH);
        int rightH = findH(node->right, maxH);

        maxH = fmax(maxH, leftH + rightH);

        return 1 + fmax(leftH, rightH);
    }
};