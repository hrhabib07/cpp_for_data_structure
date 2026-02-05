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
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    vector<ll> diff(n, 0);
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        diff[l - 1] += 1;
        if (r < n)
            diff[r] -= 1;
    }

    for (int i = 1; i < n; i++)
        diff[i] += diff[i - 1];

    sort(v.begin(), v.end());
    sort(diff.begin(), diff.end());
    ll ans = 0;
    for (int i = n - 1; i >= 0; i--)
        ans += 1LL * v[i] * diff[i];
    cout << ans;

    return 0;
}
