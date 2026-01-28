#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const char nl = '\n';

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n), v2(m);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> v2[i];
    }
    sort(v.begin(), v.end());
    sort(v2.begin(), v2.end());
    ll ans = 0;
    for (int i = 0; i < m; i++)
    {
        int val = v2[i];
        auto it = upper_bound(v.begin(), v.end(), val);
        ans += n - (it - v.begin());
    }
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
