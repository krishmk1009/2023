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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if(root == NULL) return {} ;
        vector<vector<int>> ans;

        queue<TreeNode* > q;

        q.push(root);

        while(!q.empty()){

            int x = q.size();
            vector<int> v;


            while(x--){
                TreeNode* temp = q.front();
                q.pop();

                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);

                v.push_back(temp->val);
            }

            ans.push_back(v);
        }

        reverse(ans.begin() , ans.end());
        return ans;
    }
};
