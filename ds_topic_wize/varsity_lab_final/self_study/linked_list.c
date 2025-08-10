#include<stdio.h>
#include<stdlib.h>
struct  Node
{
    int data;
    struct Node* next;
};

struct Node *head,*tail,*newnode;

void insertion_head(){
    newnode = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter your value : ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    if(head == NULL){
        head = newnode;
        tail = newnode;
    } else{
        newnode->next = head;
        head = newnode;
    }
}

void print_ll(){
    newnode = head;
    while (newnode!=NULL)
    {
        printf("%d ",newnode->data);
        newnode = newnode->next;
    }
    
}

int main(){
    head = NULL; 
    tail = NULL;
    newnode = NULL;
    int choice = 1; 
    while (choice)
    {
        printf("Enter a option:\n");
        printf("1: insertion in head\n");
        scanf("%d",&choice);
        if(choice == 1) insertion_head();

        print_ll();
    }
    
    
    return 0;
}