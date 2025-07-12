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

void check_target(Node *temp, int targ)
{
    int pos = 0, flag = 0;
    while (temp != NULL)
    {
        if (temp->val == targ)
        {
            flag = 1;
            break;
        }
        pos++;
        temp = temp->next;
    }
    if (flag)
        cout << pos << endl;
    else
        cout << -1 << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
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
        int target;
        cin >> target;
        check_target(head, target);
    }

    return 0;
}
