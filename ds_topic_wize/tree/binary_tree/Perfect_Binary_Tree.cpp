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
int solution(Node* root){
    int flag = 1;
    queue<pair<Node*,int>>q;
    q.push({root,1});
    int maxD=-1;
    while(!q.empty()){
        pair<Node*,int> p = q.front();
        q.pop();
        Node * fr = p.first; 
        int level = p.second;

        if(!fr->left && !fr->right) {
            if(maxD!=-1){
                if(maxD != level) {
                    flag = 0;
                    break;
                } else if(maxD ==-1){
                    maxD = level;
                }
            }
        }
        else if(!fr->left || !fr->right) {flag = 0;break;};
        if(fr->left) q.push({fr->left,level+1});
        if(fr->right) q.push({fr->right,level+1});
    }
    return flag;
}



int main() {
    Node * root = input_tree();
    int r = solution(root);
    // sort(v.begin(),v.end(),greater<int>());
    if(r) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
