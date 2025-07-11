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

void deletion_from_head(Node *&head)
{
    Node *temp = head;
    head = head->next;
    delete temp;
};
void deletion_from_tail(Node *head, Node *tail)
{
    Node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    };
    Node *deleteNode = temp->next->next;
    temp->next = NULL;
    tail = temp;
    delete deleteNode;
};

void delete_from_any(Node *&head)
{
    int position;
    cout << "\nEnter position :";
    cin >> position;
    cout << endl;
    if (position < 1)
    {
        cout << "Invalid position" << endl;
        return;
    }
    else
    {
        int ind = 1;
        Node *temp = head;
        while (ind < position - 1 && temp != NULL)
        {
            temp = temp->next;
            ind++;
        };
        if (temp == NULL)
        {
            cout << "Invalid position" << endl;
            return;
        }
        else
        {
            Node *deleteNode = temp->next;
            temp->next = temp->next->next;
            delete deleteNode;
        }
    }
}

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

void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
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

    while (true)
    {
        int vl;
        cin >> vl;
        if (vl == -1)
            break;
        instert_at_tail(head, tail, vl);
    }
    print_linked_list(head);
    deletion_from_tail(head, tail);
    cout << endl;
    print_linked_list(head);
    cout << endl;
    // print_reverse(head);
    return 0;
}
