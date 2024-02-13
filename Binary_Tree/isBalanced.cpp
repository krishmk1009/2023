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

    int ht(TreeNode* node){
        if(node == NULL) return 0;

        return max(ht(node->left) , ht(node->right))+1;
    }
    bool isBalanced(TreeNode* root) {
        
        if(root == NULL) {
            return true;
        }

        bool first = isBalanced(root->left);
        bool second = isBalanced(root->right);

        bool diff = abs(ht(root->left) - ht(root->right)) <=1;

        if(first && second && diff) return 1;
        else return 0;
    }
};
