//https://leetcode.com/problems/binary-tree-right-side-view/submissions/975501490/

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
    
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        rightSideView(root, 0, ans);
        return ans;
    }

    void rightSideView(TreeNode* root, int level, vector<int> &ans){
        if(root){
            if(level == ans.size()){
                ans.push_back(root->val);
            }
            rightSideView(root->right, level+1, ans);
            rightSideView(root->left, level+1, ans);
        }
    }
};