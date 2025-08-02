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
    int val;cin>>val;
    Node * root = new Node(val);
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        Node* parent = q.front();
        q.pop();
        int lv,rv;
        cin>>lv>>rv;
        if(lv!=-1) {
            Node * myleft = new Node(lv);
            parent->left = myleft;
            q.push(myleft);
        }
        if(rv!=-1) {
            Node * myright = new Node(rv);
            parent->right = myright;
            q.push(myright);
        }
    }
    return root;
}
int sum_without_leaf(Node* root){
    int sum = 0;
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        Node *fr = q.front();
        q.pop();
        if(!fr->left && !fr->right) continue;
        else sum+= fr->val;
        if(fr->left) q.push(fr->left);
        if(fr->right) q.push(fr->right);
    }
    return sum;
}



int main() {
    Node * root = input_tree();
    cout<<sum_without_leaf(root);
    return 0;
}
