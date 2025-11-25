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
    multiset<ll> ms;
    for (int i = 0; i < n; i++)
    {
        ll h;
        cin >> h;
        auto it = ms.upper_bound(h);
        if (it == ms.end())
            ms.insert(h);
        else
        {
            ms.erase(it);
            ms.insert(h);
        }
    }
    cout << ms.size();

    return 0;
}
