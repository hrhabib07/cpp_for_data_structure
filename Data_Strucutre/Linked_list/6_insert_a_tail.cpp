#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};

void insert_at_tail(Node *&head,int v){
    Node* newNode = new Node(v);
    Node* temp = head;
    if(head==NULL){
        head=newNode;
        return;
    }
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;
};

void print_linked_list(Node* head){
    Node* temp= head;
    while (temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    Node* head=NULL;
    while (true)
    {
    cout<<"Option 1: Insert a tail: (press 1)"<<endl;
    cout<<"Option 2: Print the list: (press 2)"<<endl;
    cout<<"Option 3: Terminate: (press 3)"<<endl;
    int op; cin>>op;

    if(op==1){
        cout<<"Please enter a value : "<<endl;
        int val; cin>>val;

        insert_at_tail(head,val);
    } else if (op==2){
    cout<<"Your linked list is : ";
    print_linked_list(head);
    } else if(op==3){
        break;
    }
    }
    
    
    return 0;
}