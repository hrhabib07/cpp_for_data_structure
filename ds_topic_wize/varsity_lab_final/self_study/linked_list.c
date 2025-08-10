#include<stdio.h>
#include<stdlib.h>
struct  Node
{
    int data;
    struct Node* next;
};

void pirnt_ll_rec(struct Node* temp){
    if(temp==NULL)return;
    else pirnt_ll_rec(temp->next);
    printf("%d ",temp->data);
}

int main(){
    struct Node *head, *tail,*newnode;
    head = NULL;
    tail = NULL;
    newnode =NULL;

    int n; scanf("%d",&n);
    while (n--)
    {
        newnode = (struct Node*)malloc(sizeof(struct Node));
        scanf("%d",&newnode->data);
        newnode->next = NULL;
        if(head == NULL){
            head = newnode;
            tail = newnode;
        }    else{
            tail->next = newnode;
            tail = newnode;
        }
    }
    newnode = head;
    pirnt_ll_rec(newnode);

    return 0;
}