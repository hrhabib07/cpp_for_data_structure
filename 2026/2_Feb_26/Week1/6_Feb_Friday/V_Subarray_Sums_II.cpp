#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    ll x;
    cin >> n >> x;

    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    map<ll, ll> freq;
    freq[0] = 1; // empty prefix

    ll pref = 0, ans = 0;

    for (int i = 0; i < n; i++)
    {
        pref += a[i];
        ans += freq[pref - x];
        freq[pref]++;
    }

    cout << ans << '\n';
    return 0;
}
