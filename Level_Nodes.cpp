#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;

    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* input_tree() {
    int rootVal;
    cin >> rootVal;
    Node* root = new Node(rootVal);
    queue<Node*> nodeQueue;
    nodeQueue.push(root);

    while (!nodeQueue.empty()) {
        Node* parent = nodeQueue.front();
        nodeQueue.pop();
        int leftVal, rightVal;
        cin >> leftVal >> rightVal;

        if (leftVal != -1) {
            Node* leftChild = new Node(leftVal);
            parent->left = leftChild;
            nodeQueue.push(leftChild);
        }
        if (rightVal != -1) {
            Node* rightChild = new Node(rightVal);
            parent->right = rightChild;
            nodeQueue.push(rightChild);
        }
    }
    return root;
}

int print_nodes_at_level(Node* root, int targetLevel) {
    int isEmpty = 1;
    queue<pair<Node*, int>> bfsQueue;
    bfsQueue.push({root, 0});

    while (!bfsQueue.empty()) {
        pair<Node*, int> current = bfsQueue.front();
        bfsQueue.pop();
        Node* currentNode = current.first;
        int currentLevel = current.second;

        if (currentLevel == targetLevel) {
            isEmpty = 0;
            cout << currentNode->val << " ";
        }

        if (currentNode->left) bfsQueue.push({currentNode->left, currentLevel + 1});
        if (currentNode->right) bfsQueue.push({currentNode->right, currentLevel + 1});
    }

    return isEmpty;
}

int main() {
    Node* root = input_tree();
    int level;
    cin >> level;

    int result = print_nodes_at_level(root, level);
    if (result) cout << "Invalid" << endl;

    return 0;
}
