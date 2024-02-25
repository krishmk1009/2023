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
    int kthSmallest(TreeNode* root, int k) {
        
        vector<int>store;
        solve(root, store);
        sort(store.begin() , store.end());
        return store[k-1];
    }

    void solve(TreeNode* root ,vector<int>&store ){
        if(root == NULL) return;

        solve(root->left, store);
        store.push_back(root->val);
         solve(root->right, store);
    }
};
