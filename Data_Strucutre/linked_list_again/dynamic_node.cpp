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

int main()
{
    Node *a = new Node(20);
    cout << a->val << endl;
    Node *b = new Node(30);
    cout << b->val << endl;
    a->next = b;
    cout << a->next->val << endl;
    return 0;
}
