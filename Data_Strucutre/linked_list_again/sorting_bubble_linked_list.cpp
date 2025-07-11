#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insertion_at_tail(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
        tail = head;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

void print_linked_list(Node *temp)
{
    if (temp == NULL)
        return;
    cout << temp->val << " ";
    print_linked_list(temp->next);
}

void sorting_linked_list(Node *&head, Node *&tail)
{
    for (Node *i = head; i != NULL; i = i->next)
    {
        for (Node *j = head; j->next != NULL; j = j->next)
        {
            if ((j->val) > (j->next->val))
            {
                int temp = j->val;
                j->val = j->next->val;
                j->next->val = temp;
            }
        }
    }
}

main()
{
    Node *head = NULL, *tail = NULL;

    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        else
            insertion_at_tail(head, tail, val);
    };
    sorting_linked_list(head, tail);
    print_linked_list(head);
    return 0;
}
