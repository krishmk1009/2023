int getLevel(struct Node *node, int target)
{
    //code here
    if (node == NULL)
        return 0;

    queue<Node*> q;

    q.push(node);
    int count = 1;
    while (!q.empty())
    {
        int x = q.size();

        while (x--)
        {
            Node* temp = q.front();
            q.pop();

            if (temp->left != NULL)
                q.push(temp->left);
            if (temp->right != NULL)
                q.push(temp->right);

            if (temp->data == target)
                return count;
        }
        count++;
    }

    return 0;
}
