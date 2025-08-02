#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_tree()
{
    int val;
    cin >> val;
    Node *root = new Node(val);
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *ml, *mr;
        if (l == -1)
            ml = NULL;
        else
            ml = new Node(l);
        if (r == -1)
            mr = NULL;
        else
            mr = new Node(r);
        p->left = ml;
        p->right = mr;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}

int max_height(Node *root)
{
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return 0;
    return max(max_height(root->left), max_height(root->right)) + 1;
}

int main()
{
    Node *root = input_tree();
    cout << max_height(root);

    return 0;
}
