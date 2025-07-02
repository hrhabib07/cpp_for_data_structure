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

void insert_at_head(Node *&head, Node *&tail)
{
    cout << "Insert at Head ";
    int x;
    cin >> x;
    if (head == NULL)
    {
        head = new Node(x);
        tail = head;
    }
    else
    {
        Node *temp = new Node(x);
        temp->next = head;
        head = temp;
    }
}

void insert_at_tail(Node *&head, Node *&tail)
{
    cout << "Insert at tail : ";
    if (head == NULL)
    {
        int x;
        cin >> x;
        head = new Node(x);
        tail = head;
    }
    else
    {
        int x;
        cin >> x;
        Node *newNode = new Node(x);
        tail->next = newNode;
        tail = newNode;
    }
}

void insert_at_any(Node *&hd)
{
    cout << "Enter postion : ";
    int pos;
    cin >> pos;
    int count = 1;
    Node *temp = hd;
    while (count < pos - 1)
    {
        temp = temp->next;
        count++;
    };
    if (temp == NULL)
    {
        cout << "Invalid position" << endl;
    }
    else if (temp == hd)
    {
        cout << "Enter value : ";
        int value;
        cin >> value;
        Node *newNode = new Node(value);
        newNode->next = hd;
        hd = newNode;
        return;
    }
    else
    {
        cout << "Enter value : ";
        int value;
        cin >> value;
        Node *newNode = new Node(value);
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

void display(Node *dis)
{
    while (dis != NULL)
    {
        cout << dis->val << " ";
        dis = dis->next;
    }
}

int main()
{

    Node *head = NULL;
    Node *newNode = NULL;
    Node *tail = NULL;
    Node *temp;
    // Node *tail;

    int choise = 99;
    while (choise)
    {
        switch (choise)
        {
        case 1:
            insert_at_head(head, tail);
            break;

        case 2:
            insert_at_tail(head, tail);
            break;
        case 3:
            insert_at_any(head);
            break;

        default:
            break;
        }

        // Slection Menue :
        cout << "Current Linked list : ";
        display(head);
        cout << endl;
        cout << "Press 1: Insertion at head";
        cout << endl;
        cout << "Press 2: Insertion at tail";
        cout << endl;
        cout << "Press 3: Insertion at any Position";
        cout << endl;
        cout << "Press 0: Exit";
        cout << endl;
        cin >> choise;
    }

    return 0;
}
