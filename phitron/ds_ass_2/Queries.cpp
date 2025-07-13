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

void insertion_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
    if (tail == NULL)
        tail = head;
}

void insertion_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (tail == NULL)
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

void delete_from_any(Node *&head, Node *&tail, int pos)
{
    if (head == NULL)
        return;

    if (pos == 0)
    {
        Node *deleteNode = head;
        head = head->next;
        if (head == NULL)
            tail = NULL;
        delete deleteNode;
    }
    else
    {
        Node *temp = head;
        int ind = 0;
        while (ind < pos - 1 && temp->next != NULL)
        {
            temp = temp->next;
            ind++;
        }

        if (temp->next == NULL)
            return;

        Node *deleteNode = temp->next;
        temp->next = temp->next->next;
        if (temp->next == NULL)
            tail = temp;
        delete deleteNode;
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
    int n;
    cin >> n;
    while (n--)
    {
        int x, v;
        cin >> x >> v;
        if (x == 0)
        {
            insertion_at_head(head, tail, v);
        }
        else if (x == 1)
        {
            insertion_at_tail(head, tail, v);
        }
        else if (x == 2)
        {
            delete_from_any(head, tail, v);
        }

        print_linked_list(head);
        cout << endl;
    }

    return 0;
}
