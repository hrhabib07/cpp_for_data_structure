#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};

void display(struct Node *temp)
{
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main()
{
    struct Node *head, *temp, *newnode;
    int choice = 1;
    head = 0;

    while (choice)
    {
        newnode = (struct Node *)malloc(sizeof(struct Node));
        printf("Current List : \n");
        display(head);
        printf("\n");

        printf("Enter Data : ");
        scanf("%d", &newnode->data);
        newnode->prev = 0;
        newnode->next = 0;
        if (head == 0)
        {
            head = newnode;
            temp = newnode;
        }
        else
        {
            newnode->prev = temp;
            temp->next = newnode;
            temp = newnode;
        }
        printf("Do you want to Continueue? If yes press 1 otherwise press 0.");
        scanf("%d", &choice);
    }

    return 0;
}