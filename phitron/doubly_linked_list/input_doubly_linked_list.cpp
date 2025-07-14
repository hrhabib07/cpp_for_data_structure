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

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = head;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        tail = newNode;
        head = tail;
    }
    else
    {

        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
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
    temp->next->prev = newNode;
    newNode->prev = temp;
    newNode->next = temp->next;
    temp->next = newNode;
}

void delete_from_head(Node *&head)
{
    Node *deleteNode = head;
    head = head->next;
    head->prev = NULL;
    delete deleteNode;
}
void delete_from_tail(Node *&tail)
{
    Node *deleteNode = tail;
    tail = tail->prev;
    tail->next = NULL;
    delete deleteNode;
}
void delete_from_any(Node *head, int pos)
{
    Node *temp = head;
    int ind = 0;
    while (ind < pos - 1)
    {
        ind++;
        temp = temp->next;
    }
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    temp->next->prev = temp;
    delete deleteNode;
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
            insert_at_tail(head, tail, val);
    }

    // Node *head = new Node(10);
    // Node *a = new Node(20);
    // Node *tail = new Node(30);
    // head->next = a;
    // a->prev = head;
    // a->next = tail;
    // tail->prev = a;
    // // print_forward(head);
    // // cout << endl;
    // // print_backward(tail);
    // // cout << endl;
    // insert_at_head(head, 5);
    // // print_forward(head);
    // // cout << endl;
    // // print_backward(tail);
    // // cout << endl;
    // insert_at_tail(tail, 15);
    // insert_at_any(head, 2, 2);

    // delete_from_head(head);
    // delete_from_tail(tail);
    // delete_from_any(head, 1);

    print_forward(head);
    cout << endl;

    print_backward(tail);
    cout << endl;

    return 0;
}
