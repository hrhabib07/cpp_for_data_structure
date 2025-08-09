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
    int val; cin>>val;
    if(val==-1) return NULL;
    else{
        Node* root = new Node(val);
        queue<Node*>q;
        q.push(root);
        while (!q.empty())
        {
            Node* front = q.front();
            q.pop();
            int lv,rv;
            cin>>lv>>rv;
            if(lv!=-1){
                Node* myleft = new Node(lv);
                front->left = myleft;
                q.push(myleft);
            }
            if(rv!=-1){
                Node* myright = new Node(rv);
                front->right = myright;
                q.push(myright);
            }
        }
        return root;
    }   
}

void level_order(Node* root){
    queue<Node*>q;
    q.push(root);
    while (!q.empty())
    {
        Node* front = q.front();
        q.pop();
        cout<<front->val<<" ";
        if(front->left) q.push(front->left);
        if(front->right) q.push(front->right);
    }
}

void insertion(Node* &root,int x){
    if(root == NULL){
        root->val = x;
    }
    else if(root->val>x){
        if(!root->left)
            root->left = new Node(x);
        else 
            insertion(root->left,x);
    } else{
        if(!root->right)
            root->right = new Node(x);
        else 
            insertion(root->right,x);
    }
}


int main() {
    Node* root = input_tree();
    insertion(root, 21);
    // int res = search_in_bst(root,112);
    // cout<<res;
    level_order(root);
    return 0;
}
