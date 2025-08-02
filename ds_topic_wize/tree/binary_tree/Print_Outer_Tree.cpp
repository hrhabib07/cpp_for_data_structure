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
void sol(Node *root){
    if(root->left){
        stack<Node*>st;
        st.push(root);
        Node * tp = st.top();
        while (tp->left || tp->right)
        {
            if(tp->left){ st.push(tp->left);tp = tp->left;}
            else if(tp->right){st.push(tp->right);tp=tp->right;}
        }
        while (!st.empty())
        {
            cout<<st.top()->val<<" ";
            st.pop();
        }

        queue<Node*>q;
        if (root->right) q.push(root->right);
        Node* tp2 = NULL;
        if (!q.empty()) tp2 = q.front();
        while (tp2 && (tp2->left || tp2->right))
        {
            if(tp2->right){ q.push(tp2->right);tp2 = tp2->right;}
            else if(tp2->left){q.push(tp2->left); tp2 = tp2->left;}
        }
        while (!q.empty())
        {
            cout<<q.front()->val<<" ";
            q.pop();
        } 
    } else {
        queue<Node*>q;
        q.push(root);
        Node * tp = q.front();
        while (tp->left || tp->right)
        {
            if(tp->right){ q.push(tp->right);tp = tp->right;}
            else if(tp->left){q.push(tp->left); tp = tp->left;}
        }
        while (!q.empty())
        {
            cout<<q.front()->val<<" ";
            q.pop();
        } 
    }
}


int main() {
    Node * root = input_tree();
    sol(root);
    return 0;
}
