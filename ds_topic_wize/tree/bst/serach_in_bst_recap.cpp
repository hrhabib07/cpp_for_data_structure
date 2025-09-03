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
    Node * root = new Node(val);
    queue<Node*>q;
    q.push(root);

    while (!q.empty())
    {
        Node * parent = q.front();
        q.pop();

        int lv,rv;
        cin>>lv>>rv;

        if(lv==-1){
            parent->left = NULL;
        } else{
            Node * myleft = new Node(lv);
            parent->left = myleft;
            q.push(myleft);
        }

        if(rv==-1){
            parent->right = NULL;
        } else{
            Node * myright = new Node(rv);
            parent->right = myright;
            q.push(myright);
        }
    }
    return root;
}


// void print_level_order(Node *root){

//     queue<Node*>q;
//     q.push(root);
//     while (!q.empty())
//     {
//         Node * parent = q.front();
//         cout<<parent->val<<" ";
//         q.pop();

        
//         if(parent->left){
//             q.push(parent->left);
//         }
//         if(parent->right){
//             q.push(parent->right);
//         }
//     }
// }


bool search(Node* root, int target){
    if(!root) return false;
    else {
        if(root->val == target) return true;
        else if( root->val > target) search(root->left,target);
        else search(root->right,target);
    }
}

int main() {
    Node * root = input_tree();
    // print_level_order(root);
    int target; cin>>target;
    bool res = search(root,target);
    if(res) cout<<"Found"<<endl;
    else cout<<"Not found!"<<endl;
    return 0;
}
