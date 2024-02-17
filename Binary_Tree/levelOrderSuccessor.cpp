TreeNode* levelOrderSuccessor(TreeNode* root, int key) {
    if (root == NULL) return NULL;

    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        TreeNode* temp = q.front();
        q.pop();

        if (temp->data == key)
            break;

        if (temp->left) q.push(temp->left);
        if (temp->right) q.push(temp->right);
    }
    return q.empty() ? NULL : q.front();
}
