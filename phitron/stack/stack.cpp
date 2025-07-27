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
    bool isEmpty()
    {
        return v.empty();
    }
};

int main()
{
    myStack st;
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    while (!st.isEmpty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}
