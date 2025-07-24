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
    int flag =1;
    Node *pf=head,*pb=tail;
    while(pf->prev != pb && pf!=pb){
        if(pf->val != pb->val){
            flag = 0; 
            break;
        }
        pf= pf->next;
        pb = pb->prev;
    }
    if(flag) cout<<"YES";
    else cout<<"NO";

    return 0;
}
