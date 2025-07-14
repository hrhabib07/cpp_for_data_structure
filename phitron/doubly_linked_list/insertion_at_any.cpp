#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *prev;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

void print_forward(Node *temp)
{
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}
void print_backward(Node *temp)
{
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
}

void insert_at_head(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insert_at_tail(Node *&tail, int val)
{
    Node *newNode = new Node(val);
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void insert_at_any(Node *head, int val, int pos)
{
    int ind = 0;
    Node *newNode = new Node(val);
    Node *temp = head;
    while (ind < pos - 1)
    {
        ind++;
        temp = temp->next;
    }
    newNode->prev = temp;
    temp->next = newNode;
    newNode->next = temp->next;
    temp->next->prev = newNode;
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);
    head->next = a;
    a->prev = head;
    a->next = tail;
    tail->prev = a;
    // print_forward(head);
    // cout << endl;
    // print_backward(tail);
    // cout << endl;
    insert_at_head(head, 5);
    // print_forward(head);
    // cout << endl;
    // print_backward(tail);
    // cout << endl;
    insert_at_tail(tail, 15);
    insert_at_any(head, 2, 2);
    print_forward(head);
    cout << endl;

    print_backward(tail);
    cout << endl;

    return 0;
}
