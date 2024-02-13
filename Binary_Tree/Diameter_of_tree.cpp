/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int height(TreeNode* root) {

        if(root ==NULL) return 0;

        int first = height(root->left);
        int second = height(root->right);

        return max(first,second)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if (root == NULL)
            return 0;

        int first = diameterOfBinaryTree(root->left);
        int second = diameterOfBinaryTree(root->right);
        int third = height(root->right)  + height(root->left);

        return max(first, max(second, third));
    }
};
