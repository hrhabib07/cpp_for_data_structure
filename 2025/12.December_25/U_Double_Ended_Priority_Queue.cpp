#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const char nl = '\n';

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q;
    cin >> n >> q;
    multiset<ll> ms;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        ms.insert(x);
    }

    while (q--)
    {
        int x;
        cin >> x;
        if (x == 0)
        {
            ll nn;
            cin >> nn;
            ms.insert(nn);
        }
        else if (x == 1)
        {
            cout << *(ms.begin()) << nl;
            ms.erase(ms.begin());
        }
        else if (x == 2)
        {
            auto it = prev(ms.end());

            cout << *it << nl;
            ms.erase(it);
        }
    }

    return 0;
}
