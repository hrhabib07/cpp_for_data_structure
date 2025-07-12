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

void insert_at_tail(Node *&head, Node *&tail, int val)
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

void get_difference(Node *temp)
{
    int mn = INT_MAX, mx = INT_MIN;
    while (temp != NULL)
    {
        if (temp->val > mx)
            mx = temp->val;
        if (temp->val < mn)
            mn = temp->val;
        temp = temp->next;
    }
    cout << (mx - mn) << endl;
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
    get_difference(head);
    return 0;
}
