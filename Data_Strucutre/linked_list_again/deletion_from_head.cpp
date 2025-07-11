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

void deletion_from_head(Node *&head)
{
    Node *temp = head;
    head = head->next;
    delete temp;
}

void instert_at_tail(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);
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

void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

void print_reverse(Node *temp)
{
    if (temp == NULL)
        return;

    print_reverse(temp->next);
    cout << temp->val << " ";
}

int main()
{
    Node *head = NULL, *tail = NULL;

    while (true)
    {
        int vl;
        cin >> vl;
        if (vl == -1)
            break;
        instert_at_tail(head, tail, vl);
    }
    print_linked_list(head);
    deletion_from_head(head);
    cout << endl;
    print_linked_list(head);
    cout << endl;
    // print_reverse(head);
    return 0;
}
