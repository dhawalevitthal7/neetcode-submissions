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
    int result = -1;
    void func(TreeNode* root , int& k ){
        if(root == NULL || k < 0) return;
        func(root->left, k);
        if(k == 0) {
            result = root->val;
            k--;
            return;
        }
        k--;
        func(root->right, k);
    }
    int kthSmallest(TreeNode* root, int k) {
        int count = k - 1;
        func(root, count);
        return result;
    }
};