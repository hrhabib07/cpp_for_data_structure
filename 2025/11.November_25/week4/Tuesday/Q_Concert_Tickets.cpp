#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const char nl = '\n';

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    multiset<int> mst;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mst.insert(x);
    }

    while (m--)
    {
        int x;
        cin >> x;
        auto it = mst.upper_bound(x);

        if (it == mst.begin())
        {
            cout << -1 << nl;
        }
        else
        {
            --it;
            cout << *it << nl;
            mst.erase(it);
        }
    }

    return 0;
}
