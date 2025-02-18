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
void insert_at_tail(Node* &head,int val){
    Node* newNod= new Node(val);
    Node* temp = head;
    if(head==NULL){
        head=newNod;
        return;
    }
    while (temp->next!=NULL)
    {
        temp=temp->next;
    };
    temp->next=newNod;    
};



void print_the_linked_list(Node* head){
    Node* temp = head;
    cout<<"Your linked list is : ";
    while (temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    };
};

void insert_in_head(Node* &head, int val){
    Node* newNode =new Node(val);
    newNode->next=head;
    head=newNode;
    cout<<"Inserted at head position"<<endl;
};

void insert_at_any_position(Node* head,int p,int v){
    if(p==0){
        insert_in_head(head,v);
    } else{
    Node* newNode=new Node(v);
    Node* temp=head;

    for (int i = 1; i<=p-1; i++)
    {
        temp=temp->next;
    
    }
    newNode->next=temp->next;
    temp->next=newNode;
    cout<<"Inserted at "<<p<<" position"<<endl;
    }
}

void delete_a_node(Node* &head, int p){
    if(p==0){
        Node* deleteNode = head;
        head=head->next;
        delete deleteNode;
        // head->next=head->next->next;
        
    } else{
    Node* target = head;
    for (int i = 1; i < p-1; i++)
    {
        target=target->next;
    }
    Node* deleteNode = target->next;
    target->next=target->next->next;
    delete deleteNode;
    }
}

int main(){
    Node* head=NULL;
    // cout<<endl;
    while (true)
    {
    cout<<"Please Select an option : "<<endl;
    cout<<"option 1: insert a node in tail"<<endl;
    cout<<"option 2: Print the list"<<endl;
    cout<<"option 3: Insert in any position "<<endl;
    cout<<"option 4: Insert in head "<<endl;
    cout<<"option 5: Delete a position "<<endl;
    cout<<"option 6: Skip "<<endl;
    int op; cin>>op;    
    if(op==1){
        int v; cin>>v;
        insert_at_tail(head,v);
    } else if(op==2){
        print_the_linked_list(head);
        cout<<endl;
    } else if(op==3){
        int p,v;
        cout<<"Enter a position : ";
        cin>>p;
        cout<<"Enter a value : ";
        cin>>v;
        cout<<endl;
        insert_at_any_position(head,p,v);
    } else if(op==4){
        int v; cin>>v;
        insert_in_head(head, v);
    } else if (op==5){
        int p; cin>>p;
        delete_a_node(head,p);
    } 
    else if(op==6){
        break;
    }
    }

    return 0;
}