#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    vector<int> v;
    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool empty()
    {
        return v.empty();
    }
};
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

class myQueue
{
public:
    Node *head = NULL, *tail = NULL;
    int sz = 0;
    void push(int val)
    {
        Node *newnode = new Node(val);
        if (head == NULL)
        {
            head = newnode;
            tail = head;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
        sz++;
    }
    void pop()
    {
        if (head == NULL)
            return;
        Node *deletenode = head;
        head = head->next;
        delete deletenode;
        sz--;
        if (head == NULL)
            tail = NULL;
    }
    int front()
    {
        return head->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        return sz == 0;
    }
};

int main()
{
    myStack st;
    myQueue q;
    int n, m;
    int flag = 1;
    cin >> n >> m;
    while (n--)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    while (m--)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    while (!q.empty() && !st.empty())
    {
        int qt = q.front(), stt = st.top();
        if (qt != stt)
        {
            flag = 0;
            break;
        }
        else
        {
            q.pop();
            st.pop();
        }
    }
    if (!q.empty() || !st.empty())
    {
        flag = 0;
    }
    if (flag)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
