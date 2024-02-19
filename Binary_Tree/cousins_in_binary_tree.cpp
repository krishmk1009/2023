class Solution {
public:
   TreeNode* findNode(TreeNode* node, int data) {
    if (node == NULL) return NULL;
    if (node->val == data) return node;

    TreeNode* n = findNode(node->left, data);
    if (n != NULL) {
        return n;
    }
    else {
        return findNode(node->right, data);
    }
}

    bool issibling(TreeNode* root, TreeNode* xx, TreeNode* yy) {
    if (root == NULL)
        return false;

    if (root->left == xx && root->right == yy)
        return true;
    if (root->left == yy && root->right == xx)
        return true;

    return issibling(root->left, xx, yy) || issibling(root->right, xx, yy);
}

    int getLevel(TreeNode* node, int target, int level) {
        if (node == NULL)
            return 0;

        if (node->val == target)
            return level;

        int leftLevel = getLevel(node->left, target, level + 1);
        if (leftLevel != 0)
            return leftLevel;

        return getLevel(node->right, target, level + 1);
    }

    bool isCousins(TreeNode* root, int x, int y) {
        TreeNode* xx = findNode(root, x);
        TreeNode* yy = findNode(root, y);

        if (xx == NULL || yy == NULL)
            return false;

        return (getLevel(root, x, 1) == getLevel(root, y, 1) && !issibling(root, xx, yy));
    }
};
