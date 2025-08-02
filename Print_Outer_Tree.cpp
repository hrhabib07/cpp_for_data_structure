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

void print_special_path(Node* root) {
    if (root->left) {
        stack<Node*> leftPathStack;
        leftPathStack.push(root);
        Node* current = leftPathStack.top();

        while (current->left || current->right) {
            if (current->left) {
                leftPathStack.push(current->left);
                current = current->left;
            }
            else if (current->right) {
                leftPathStack.push(current->right);
                current = current->right;
            }
        }

        while (!leftPathStack.empty()) {
            cout << leftPathStack.top()->val << " ";
            leftPathStack.pop();
        }

        queue<Node*> rightPathQueue;
        if (root->right) rightPathQueue.push(root->right);

        Node* rightCurrent = NULL;
        if (!rightPathQueue.empty()) rightCurrent = rightPathQueue.front();

        while (rightCurrent && (rightCurrent->left || rightCurrent->right)) {
            if (rightCurrent->right) {
                rightPathQueue.push(rightCurrent->right);
                rightCurrent = rightCurrent->right;
            }
            else if (rightCurrent->left) {
                rightPathQueue.push(rightCurrent->left);
                rightCurrent = rightCurrent->left;
            }
        }

        while (!rightPathQueue.empty()) {
            cout << rightPathQueue.front()->val << " ";
            rightPathQueue.pop();
        }
    } else {
        queue<Node*> onlyRightPath;
        onlyRightPath.push(root);
        Node* current = onlyRightPath.front();

        while (current->left || current->right) {
            if (current->right) {
                onlyRightPath.push(current->right);
                current = current->right;
            }
            else if (current->left) {
                onlyRightPath.push(current->left);
                current = current->left;
            }
        }

        while (!onlyRightPath.empty()) {
            cout << onlyRightPath.front()->val << " ";
            onlyRightPath.pop();
        }
    }
}

int main() {
    Node* root = input_tree();
    print_special_path(root);
    return 0;
}
