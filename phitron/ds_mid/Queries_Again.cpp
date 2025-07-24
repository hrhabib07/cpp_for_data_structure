#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next, *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print_forward(Node *head)
{
    cout << "L -> ";
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void print_backward(Node *tail)
{
    cout << "R -> ";
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

void insert_at_position(Node *&head, Node *&tail, int pos, int val, int &size)
{
    if (pos < 0 || pos > size)
    {
        cout << "Invalid" << endl;
        return;
    }

    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = tail = newNode;
    }
    else if (pos == 0)
    {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
    else if (pos == size)
    {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    else
    {
        Node *temp = head;
        for (int i = 0; i < pos - 1; i++)
        {
            temp = temp->next;
        }
        newNode->next = temp->next;
        newNode->prev = temp;
        temp->next->prev = newNode;
        temp->next = newNode;
    }

    size++;

    print_forward(head);
    print_backward(tail);
}

int main()
{
    Node *head = NULL, *tail = NULL;
    int Q;
    cin >> Q;
    int size = 0;

    while (Q--)
    {
        int x, v;
        cin >> x >> v;
        insert_at_position(head, tail, x, v, size);
    }

    return 0;
}
