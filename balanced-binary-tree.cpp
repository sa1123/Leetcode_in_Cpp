// https://leetcode.com/problems/balanced-binary-tree/submissions/1476388728/

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
    //find height of each node starting from the leftside, bottom to top
public:
    int isB(TreeNode* root){
        if(!root){
            return 0;
        }

        //depth of left side, recursive until null. null makes int leftdepth = 0. +1 added per row
        int leftdepth = isB(root->left);
        if(leftdepth == -1){
            return -1;
        }

        int rightdepth = isB(root->right);
        if(rightdepth == -1){
            return -1;
        }

        if(abs(leftdepth - rightdepth) > 1){
            return -1;
        }

        return 1 + fmax(leftdepth, rightdepth);
    }

    bool isBalanced(TreeNode* root) {
        if(!root){
            return true;
        }else{
            return isB(root) != -1;
        }
    }
};