#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        head->prev = newNode;
        newNode->next = head;
        head = newNode;
    }
}

void insert_any(Node *&head, Node *&tail, int val, int pos)
{
    if (pos == 0)
    {
        insert_head(head, tail, val);
        return;
    }

    Node *newNode = new Node(val);
    Node *temp = head;
    int ind = 0;

    while (ind < pos - 1)
    {
        if (temp == NULL)
        {
            cout << "Invalid" << endl;
            return;
        }
        temp = temp->next;
        ind++;
    }
    if (ind != pos - 1)
    {
        cout << "Invalid" << endl;
        return;
    }
    if (temp == NULL || temp->next == NULL) // Insert at end
    {
        temp->next = newNode;
        newNode->prev = temp;
        tail = newNode;
    }
    else
    {
        newNode->next = temp->next;
        newNode->prev = temp;
        temp->next->prev = newNode;
        temp->next = newNode;
    }
}

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

int main()
{
    Node *head = NULL, *tail = NULL;
    int t;
    cin >> t;
    while (t--)
    {
        int p, v;
        cin >> p >> v;

        insert_any(head, tail, v, p);

        cout << "L -> ";
        print_forward(head);
        cout << endl;
        cout << "R -> ";
        print_backward(tail);
        cout << endl;
    }

    return 0;
}
