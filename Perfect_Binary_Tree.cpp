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

Node* input_tree(){
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

int solution(Node* root){
    int isValid = 1;
    queue<pair<Node*, int>> bfsQueue;
    bfsQueue.push({root, 1});
    int maxDepth = -1;

    while (!bfsQueue.empty()) {
        pair<Node*, int> current = bfsQueue.front();
        bfsQueue.pop();
        Node* currentNode = current.first;
        int level = current.second;

        if (!currentNode->left && !currentNode->right) {
            if (maxDepth != -1) {
                if (maxDepth != level) {
                    isValid = 0;
                    break;
                }
            } else if (maxDepth == -1) {
                maxDepth = level;
            }
        }
        else if (!currentNode->left || !currentNode->right) {
            isValid = 0;
            break;
        }

        if (currentNode->left) bfsQueue.push({currentNode->left, level + 1});
        if (currentNode->right) bfsQueue.push({currentNode->right, level + 1});
    }
    return isValid;
}

int main() {
    Node* root = input_tree();
    int result = solution(root);

    if (result) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
