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
    // insertion will be stop when value is -1
    while (true)
    {
        int vl;
        cin >> vl;
        if (vl == -1)
            break;
        instert_at_tail(head, tail, vl);
    }
    cout << endl;
    print_reverse(head);
    return 0;
}
