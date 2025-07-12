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

void insertion_at_any(Node *&head, Node *&tail, int pos, int val)
{
    Node *newNode = new Node(val);
    if (pos == 0)
    {
        newNode->next = head;
        head = newNode;
        tail = head;
    }
    else if (pos == 1)
    {
        if (head == NULL)
        {
            head = newNode;
            tail = head;
        }
        else
        {

            tail->next = newNode;
            tail = newNode;
        }
    }
    else
    {
        int ind = 0;
        Node *temp = head;
        while (ind < val - 1)
        {
            ind++;
            if (temp->next != NULL)
                temp = temp->next;
            else
            {
                return;
            }
        }
        Node *deleteNonde = temp->next;
        temp->next = temp->next->next;
        delete deleteNonde;
        // newNode->next = temp->next;
        // temp->next = newNode;
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
    int t;
    cin >> t;
    while (t--)
    {
        int x, v;
        cin >> x >> v;
        insertion_at_any(head, tail, x, v);
        print_linked_list(head);
        cout << endl;
    }

    return 0;
}
