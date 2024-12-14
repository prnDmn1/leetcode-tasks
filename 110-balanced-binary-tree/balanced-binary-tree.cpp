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
    int deapth(TreeNode* root) {
        if (!root)
            return 0;
        return max(deapth(root->left), deapth(root->right)) + 1;
    }
    bool isBalanced(TreeNode* root) {
        if (!root)
            return true;
        if (abs(deapth(root->left) - deapth(root->right)) > 1)
            return false;
        return isBalanced(root->left) && isBalanced(root->right);
    }
};