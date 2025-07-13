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

void ceck_eq(Node *temp1, Node *temp2)
{
    int falg = 1;
    while (temp1 != NULL && temp2 != NULL)
    {
        if (temp1->val != temp2->val)
        {
            falg = 0;
            break;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    if (temp1 != NULL || temp2 != NULL)
        cout << "NO" << endl;
    else
    {
        if (falg)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}

int main()
{
    Node *head1 = NULL, *tail1 = NULL;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        else
            insert_at_tail(head1, tail1, val);
    }
    Node *head2 = NULL, *tail2 = NULL;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        else
            insert_at_tail(head2, tail2, val);
    }
    ceck_eq(head1, head2);
    // get_difference(head);
    return 0;
}
