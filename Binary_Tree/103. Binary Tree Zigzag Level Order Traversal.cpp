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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {

        if (root == NULL)
            return {};

        queue<TreeNode*> q;
        vector<vector<int>> ans;
        q.push(root);

        bool flag = 1;

        while (!q.empty()) {

            int x = q.size();
            vector<int> v;
            while (x--) {

                TreeNode* temp = q.front();
                q.pop();

                if (temp->left)
                    q.push(temp->left);
                if (temp->right)
                    q.push(temp->right);

                v.push_back(temp->val);

               

                
            }
             if (!flag) {
                    reverse(v.begin(), v.end());
                }

            ans.push_back(v);
            flag = !flag;
        }
        return ans;
    }
};
