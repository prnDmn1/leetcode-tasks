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
    bool isValid(TreeNode* r, double lv, double rv) {
        if (!r)
            return true;
        if (r->val > lv && r->val < rv)
            return isValid(r->left, lv, r->val) && isValid(r->right, r->val, rv);
        else 
            return false;
    }

    bool isValidBST(TreeNode* root) {
        float lv = -numeric_limits<double>::infinity();
        float rv = numeric_limits<double>::infinity();
        return isValid(root, lv, rv);
    }
};