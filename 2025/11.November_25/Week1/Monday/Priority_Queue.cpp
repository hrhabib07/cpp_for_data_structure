#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    if (!(cin >> n >> q))
        return 0;

    vector<priority_queue<long long>> pq(n);

    for (int i = 0; i < q; ++i)
    {
        int type;
        cin >> type;

        if (type == 0)
        {
            int t;
            long long x;
            cin >> t >> x;
            pq[t].push(x);
        }
        else if (type == 1)
        {
            int t;
            cin >> t;
            if (!pq[t].empty())
            {
                cout << pq[t].top() << '\n';
            }
        }
        else if (type == 2)
        {
            int t;
            cin >> t;
            if (!pq[t].empty())
                pq[t].pop();
        }
    }
    return 0;
}
