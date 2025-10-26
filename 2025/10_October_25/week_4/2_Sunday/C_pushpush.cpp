#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const char nl = '\n';

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    deque<int> dq;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            dq.push_back(v[i]);
        else
            dq.push_front(v[i]);
    }
    if (n % 2 == 0)
    {
        while (!dq.empty())
        {
            cout << dq.front() << " ";
            dq.pop_front();
        }
    }
    else
    {
        while (!dq.empty())
        {
            cout << dq.back() << " ";
            dq.pop_back();
        }
    }

    return 0;
}
