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

void insertion_at_tail(Node *&head, Node *&tail, int val)
{

    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

void selection_sort(Node *head, Node *tail)
{
    for (Node *i = head; i != NULL; i = i->next)
    {
        Node *curMin = i;
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (j->val < curMin->val)
                curMin = j;
        }
        if (curMin != i)
        {
            swap(i->val, curMin->val);
            // i->val = curMin->val;
        }
    }
}

void print_linked_list(Node *temp)
{
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

int main()
{
    Node *head = NULL, *tail = NULL;

    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        else
        {
            insertion_at_tail(head, tail, val);
        }
    };
    print_linked_list(head);
    cout << endl;
    selection_sort(head, tail);
    print_linked_list(head);

    return 0;
}