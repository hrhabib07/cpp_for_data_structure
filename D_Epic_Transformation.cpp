#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const char nl = '\n';

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        priority_queue<int> pq;
        for (auto [f, s] : mp)
        {
            pq.push(s);
        }
        while (pq.size() > 1)
        {
            int a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();
            if (--a > 0)
                pq.push(a);
            if (--b > 0)
                pq.push(b);
        }
        if (pq.empty())
            cout << 0 << endl;
        else
            cout << pq.top() << endl;
    }

    return 0;
}
