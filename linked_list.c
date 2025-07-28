#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void print_ll(struct Node *head)
{
    struct Node *temp2 = head;
    while (temp2 != NULL)
    {
        printf("%d ", temp2->data);
        temp2 = temp2->next;
    }
}

int main()
{
    struct Node *head, *newnode, *temp;
    head = 0;
    int choice = 1;
    while (choice)
    {
        newnode = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter data: ");
        scanf("%d", &newnode->data);
        newnode->next = 0;
        if (head == 0)
        {
            head = newnode;
            temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        printf("Do you wnat to continue? if yes press 1 else press 0.");
        scanf("%d", &choice);
        printf("Your current ll: ");
        print_ll(head);
        printf("\n");
    }

    return 0;
}