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
        ll res = 0;
        priority_queue<int> pq;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x == 0 && !pq.empty())
            {
                res += pq.top();
                pq.pop();
            }

            else
            {
                pq.push(x);
            }
        }
        cout << res << endl;
    }

    return 0;
}
